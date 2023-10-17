# livox_camera_lidar_calibration_d2

Since Livox has not updated the livox_camera_lidar_calibration repo for a long time, and currently livox_camera_lidar_calibration only supports livox_ros_driver, so I modified livox_camera_lidar_calibration as follows:

- 1.livox_camera_lidar_calibration_d2 applies to livox_ros_driver2.
- 2.Incorporated Kaan Oguzhan's code[2] to make the calibration process more user-friendly.
- 3.Added calibration data collected by myself for reference.

## 1.Install dependencies

Please refer to https://github.com/Livox-SDK/livox_camera_lidar_calibration, includes Livox_SDK、livox_ros_driver2、PCL、Eigen、Ceres and PCL tools( `sudo apt install pcl-tools` ).

## 2.Download source code and compile

```bash
# install camera/lidar calibration package
cd src
git clone https://github.com/DoongLi/livox_camera_lidar_calibration_d2.git
cd ..
catkin_make
source devel/setup.bash
```

Note: You need to put livox_ros_driver2 and livox_camera_lidar_calibration_d2 under the same src. 

## 3.Calibrating camera and lidar external parameters

## 4.Verify and use external parameters

## Reference

- [1].https://github.com/Livox-SDK/livox_camera_lidar_calibration
- [2].https://github.com/kaanoguzhan/livox_camera_lidar_calibration

## Note

- Data collection：The distance is 4-5m, 10-20 different distances and angles, including left and right positions, so that the calibration plate appears at various positions in the image, and the four corners of the calibration object must be visible in both the image and the point cloud. 10s rosbag (including points clouds and images), collected from **/camera/color/image_raw** (original image)

- About camera internal parameters: Realsense cameras can directly read internal parameters and do not require additional calibration.

- Since the original rosbag file and pcd file are too large, I did not upload them, you can see how they look in the picture below：

![1](/home/doongli/Github-Workspace/DoongLi/livox_camera_lidar_calibration_d2/IMG/1.png)

![2](/home/doongli/Github-Workspace/DoongLi/livox_camera_lidar_calibration_d2/IMG/2.png)