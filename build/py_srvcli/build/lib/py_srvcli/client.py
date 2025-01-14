import rclpy

from rclpy.node import Node
from custom_msgs.srv import Path
from custom_msgs.srv import Corners

import cv2 as cv
# from sensor_msgs.msg import Image
from cv_bridge import CvBridge

trial_file = "/home/rishith/MRT/MRT_ASSIGNMENT_4/ArUco_Tags.mp4"

class MinimalClientAsync(Node):

    def __init__(self, server_to_connect_with):

        if server_to_connect_with == "aruco_tag_detector":

            super().__init__('main_client')
            self.cli = self.create_client(Corners, 'find_bounds_of_arucotags')
            while not self.cli.wait_for_service(timeout_sec=1.0):
                self.get_logger().info('service not available, waiting again...')
            self.req = Corners.Request()

        elif server_to_connect_with == "rrt_pathfinder":

            super().__init__('main_client')
            self.cli = self.create_client(Path, 'find_path_between_arucotags')
            while not self.cli.wait_for_service(timeout_sec=1.0):
                self.get_logger().info('service not available, waiting again...')
            self.req = Path.Request()

    def send_request_to_aruco(self, filename):
        bridge = CvBridge()
        img = cv.imread(filename)
        img_msg = bridge.cv2_to_imgmsg(img, encoding="passthrough")
        self.req.image = img_msg
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
    
    def send_request_to_rrt(self, boundaries):
        # width, height = boundaries[0], boundaries[1]
        # bounding_boxes = boundaries[2:]
        self.req.bounding_boxes = boundaries
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
    
def display_path(path):

    img = cv.imread(trial_file)

    cv.circle(img, (path[0], path[1]), 2, (0, 0, 255), thickness=3, lineType=8)
    cv.circle(img, (path[-2], path[-1]), 2, (0, 0, 255), thickness=3, lineType=8)

    num_points = len(path) // 2

    for i in range(num_points - 1):
        cv.line(img, (path[2*i], path[2*i+1]), (path[2*i + 2], path[2*i+3]), (255, 0, 0), thickness=3, lineType=8)
    cv.imwrite("/home/rishith/MRT/MRT_ASSIGNMENT_4/Aruco_tag_picture.png", img)


def main():
    rclpy.init()

    minimal_client1 = MinimalClientAsync("aruco_tag_detector")

    response1 = minimal_client1.send_request_to_aruco(trial_file)
    boxes = response1.corners
    minimal_client1.get_logger().info(str(boxes))

    minimal_client1.destroy_node()

    minimal_client2 = MinimalClientAsync("rrt_pathfinder")

    response2 = minimal_client2.send_request_to_rrt(boxes)
    path_found = response2.path
    minimal_client2.get_logger().info(str(path_found))

    display_path(path_found)

    minimal_client2.destroy_node()

    rclpy.shutdown()

if __name__ == '__main__':
    main()