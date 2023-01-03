#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import numpy as np
from std_msgs.msg import String
from tutorial_interfaces.srv import Gotogoal

class MyNode(Node):
    x_pos = 0.0
    y_pos = 0.0
    t_pos = 0.0
    Goal_X = 0.0
    Goal_Y = 0.0
    def __init__(self):
        super().__init__("first_node")
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.subscription = self.create_subscription(
        Pose,
        '/turtle1/pose',
        self.listener_callback,10)

        self.srv = self.create_service(Gotogoal,'set_goal', self.get_goal)
        print("salio")
        timer_period = 0.5  # seconds
        self.create_timer(timer_period, self.timer_callback)
        self.counter_ = 0
    
    def get_goal(self,request,response):
        try:
            response.z = "ok"
            self.Goal_X = request.x
            self.Goal_Y = request.y

            return response
        except:
            print("F")
    def timer_callback(self):
        msg = Twist()
        msg.linear.x, msg.angular.z = self.controller(self.x_pos,self.y_pos,self.t_pos,self.Goal_X,self.Goal_Y)
        self.publisher_.publish(msg)
    
    def controller(self,x,y,t,x_goal,y_goal):
        
        L = np.sqrt((x_goal-x)**2+(y_goal-y)**2)*0.2
        A = ((np.arctan2((y_goal-y),(x_goal-x))) - t)*0.7 
        self.get_logger().info(str(self.x_pos)+" , "+str(self.y_pos))  
        return L,A

    def listener_callback(self,data):
       
        self.x_pos = data.x
        self.y_pos = data.y
        self.t_pos = data.theta

def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    rclpy.shutdown()
if __name__ == '__main__':
    main()