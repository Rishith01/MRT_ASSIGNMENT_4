from custom_msgs.srv import Path
import rclpy
from rclpy.node import Node
import cv_bridge
import cv2 
import numpy as np
from std_msgs.msg import Int64MultiArray
import threading

from custom_msgs.srv import Path          


class RRTServer(Node):

    def __init__(self):
        super().__init__('RRTServer')
        self.srv = self.create_service(Path, 'plan_path', self.rrt_path_callback)

        #Initalize the cv bridge.
        self.cv_bridge = cv_bridge.CvBridge()

        self.counter = 1
        
        # Image attribute..
        self.image = None

        # Start a thread for updating the image window..
        display_thread = threading.Thread(target=self.update_window)
        display_thread.start()


    def rrt_path_callback(self, request, response):

        # Log the receieved image counter..
        self.get_logger().info(f"Receiveing Image:  {self.counter}")
        self.counter += 1

        image = self.cv_bridge.imgmsg_to_cv2(request.image)
        coordinates = request.coordinates.data
        info = request.info.data

        num_rows = len(coordinates) // 8
        coordinates= [coordinates[i*8:(i+1)*8].tolist() for i in range(num_rows)]

        # Info contains all the arguments.. (startpointx, startpointy, endpointx, endpointy, stepsize, iterLimit )
        rrt_planrer = Path(start_point = (info[0],info[1]), end_point = (info[2],info[3]), stepsize = info[4], iterlimit = info[5], bounding_boxes = coordinates, image = image)
        path_points = rrt_planrer.planning()
        
        if  path_points:
            response.coordinates = self.get_array_msg([coordinate for point in path_points for coordinate in point ])

        else:
            response.coordinates = self.get_array_msg([])

        self.display_image(rrt_planrer.image)

        return response
    
    def display_image(self,image):

        self.image = image

    def update_window(self):
        
        while True:

            if self.image is not None:
                cv2.imshow('Path', self.image)
                cv2.waitKey(10)
            


    def get_array_msg(self,msg):
        msg = list(map(int,msg))
        array_msg = Int64MultiArray(data = msg)
        return array_msg

        
def main():
    rclpy.init()
    img = cv2.imread('/home/rishith/MRT/MRT_ASSIGNMENT_4/src/py_srvcli/ArUco_Tags.mp4')
    cv2.imshow("Image",img)
    rrt_server = RRTServer()  
    rclpy.spin(rrt_server)

    rclpy.shutdown()



if __name__ == '__main__':
    main()