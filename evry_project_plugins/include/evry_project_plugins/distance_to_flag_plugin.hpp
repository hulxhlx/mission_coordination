#ifndef DISTANCE_TO_FLAG_PLUGIN_HPP
#define DISTANCE_TO_FLAG_PLUGIN_HPP

#include "gazebo/common/Plugin.hh"
#include "gazebo/gazebo.hh"
#include "gazebo/physics/physics.hh"
#include <ignition/math.hh>

#include <evry_project_plugins/DistanceToFlag.h>
#include <geometry_msgs/Pose2D.h>
#include <ros/ros.h>

#include <random>

namespace gazebo {
class DistanceToFlagPlugin : public WorldPlugin {
public:
  DistanceToFlagPlugin();
  virtual ~DistanceToFlagPlugin();

protected:
  virtual void Load(physics::WorldPtr world, sdf::ElementPtr sdf);

private:
  ros::NodeHandle *_nh;
  ros::ServiceServer _dtf_service;

  std::default_random_engine _generator;
  std::normal_distribution<double> _distribution;

  std::vector<geometry_msgs::Pose2D> _flags_poses;
  std::vector<geometry_msgs::Pose2D> _obs_poses;

  bool distanceToFlag(evry_project_plugins::DistanceToFlag::Request &req,
                      evry_project_plugins::DistanceToFlag::Response &res);
};
} // namespace gazebo

#endif
