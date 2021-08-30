//
//  AbstractPhotoTaker.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-12-01.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef AbstractPhotoTaker_hpp
#define AbstractPhotoTaker_hpp

#include <opencv2/dnn.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

/**
 * @class AbstractPhotoTaker
 * @brief PhotoTaker Abstract class - where RandomPhotoTaker inherits from
 * 
 * This abstract class was created according to inheritence principles. In real life 
 * implementation, there would be a PhotoTaker class inheriting from this abstract class which takes
 * live photos through the camera 
 * @authors Harkirat Bassi and Maanasa Pillai
 */ 

class AbstractPhotoTaker {
    
public:
    virtual ~AbstractPhotoTaker() { };
    virtual cv::String takePhoto() = 0;
    
};

#endif /* AbstractPhotoTaker_hpp */
