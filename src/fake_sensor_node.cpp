#include "ros/ros.h"
#include "fake_sensor/Point.h"
#include "fake_sensor/Detect_fruit.h"
#include "fake_sensor/Detect_fiducial.h"

bool fiducial_callback(fake_sensor::Detect_fiducial::Request  &req, fake_sensor::Detect_fiducial::Response &res)
{
  res.stamp = ros::Time::now();
  res.frame_id = "/camera";
  res.success = true; //if fail, error message will be sent
  res.message = "";   //or error message e.g. no fiducial found
  res.x = 1.3;
  res.y = 2.1;
  res.z = 3.2;
  return true;
}

bool fruit_callback(fake_sensor::Detect_fruit::Request  &req, fake_sensor::Detect_fruit::Response &res)
{
  res.stamp = ros::Time::now();
  res.frame_id = "/camera";
  res.success = true; //if fail, error message will be sent
  res.message = "";   //or error message e.g. camera overheat error
  for (int i=1; i<5; i++){
    fake_sensor::Point detection;
    detection.x = i;
    detection.y = 6 - i;
    detection.z = i % 3;
    detection.c = double(detection.z)/3;
    res.points.push_back(detection);
  }
  return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "fake_sensor_node");
  ros::NodeHandle nh;
  ros::ServiceServer fiducial_service = nh.advertiseService("detect_fiducial", fiducial_callback);
  ros::ServiceServer fruit_service = nh.advertiseService("detect_fruit", fruit_callback);
  ros::spin();
  return 0;
}
