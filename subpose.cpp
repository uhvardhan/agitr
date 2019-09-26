// This program subscribes to turtle1/pose and shows its messages on the screen
#include <ros/ros.h>
#include <turtlesim/Pose.h>
#include <iomanip> // For std::setprecision and std::fixed

// A callback function. Executed each time a new pose message arrives
void poseMessageReceived(const turtlesim::Pose &msg) {
    ROS_INFO_STREAM(std::setprecision(2) << std::fixed << "position=(" <<
    msg.x << "," << msg.y << ")" << " direction=" << msg.theta);
}

int main(int argc, char **argv) {
    // Iniialize the ROS System and become a node.
    ros::init(argc, argv, "subscribe_to_pose");
    ros::NodeHandle nh;

    // Create a Subscriber object.
    ros::Subscriber sub = nh.subscribe("turtle1/pose", 1000, &poseMessageReceived);

    // Let ROS take over
    ros::spin();
}
