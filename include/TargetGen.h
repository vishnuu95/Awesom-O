/**
 * @file TargetGen.h
 * @author Sneha Nayak
 * @brief
 * @date 2020-12-01
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef INCLUDE_TARGETGEN_H
#define INCLUDE_TARGETGEN_H

#include <ros/ros.h>
#include <iostream>
#include <math.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/TwistStamped.h>

class TargetGen {
private:

    // Ros Node handle
    ros::NodeHandle nh_;
    
    // Publishers
    // Publishes 
	ros::Publisher pub_poses_;
	


public:
	/*
	*	@brief Default constructor for TargetGen object
	*	@param n -  Ros node handle reference
	*/
	TargetGen(const ros::NodeHandle& n);
	/*
	*	@brief Default destructor
	*/
	~TargetGen();
	/*
	*	@brief 
	*	@param msg - 
	*/
	std::vector<std::vector<float>> getPositions(int locations_count);
	
};
#endif // INCLUDE_TARGETGEN_H