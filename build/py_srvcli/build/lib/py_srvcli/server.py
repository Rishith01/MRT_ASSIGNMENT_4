import cv2 as cv
import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge
from custom_msgs.srv import Corners

def detect_aruco(image):

    arucoDict = cv.aruco.getPredefinedDictionary(cv.aruco.DICT_4X4_250)
    parameters =  cv.aruco.DetectorParameters()
    detector = cv.aruco.ArucoDetector(arucoDict, parameters)

    return detector.detectMarkers(image)

class MinimalService(Node):

    def __init__(self, node_name):
        super().__init__(node_name)
        self.srv = self.create_service(Corners, 'find_bounds_of_arucotags', self.find_bounds)

    def find_bounds(self, request, response):
        img_msg = request.image 
        self.get_logger().info('Incoming request')        
        bridge = CvBridge()
        cv_image = bridge.imgmsg_to_cv2(img_msg, desired_encoding='passthrough')

        shape = cv_image.shape
        width = shape[0]
        height = shape[1]

        (corners, ids, _) = detect_aruco(cv_image)

        response.ids = [int(i) for i in ids.flatten()]
        bound_coordinates = [width, height]

        for corner in corners:
            bound_coordinates.extend([int(j) for j in corner.flatten()])

        response.corners = bound_coordinates
        
        self.get_logger().info('Incoming request')

        return response


def main():
    rclpy.init()

    minimal_service = MinimalService("arucotag_detector")

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()