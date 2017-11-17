//  Created by Margusja on 13/11/2017.
//  Copyright © 2017 Margusja. All rights reserved.
//

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include "opencv2/features2d.hpp"
#include "opencv2/xfeatures2d.hpp"

#include <iostream>
#include <fstream>
#include <sstream>
#include <opencv2/face.hpp>
#include "Matcher.h"



void margusja::C1::Match()
    {
    cv::Mat img = cv::imread("/Users/margusja/Pictures/faces/margusja2.jpg", 1);
    cv::Mat img2 = cv::imread("/Users/margusja/Pictures/faces/margusja2_2.png",1);
    
    //-- Step 1: Detect the keypoints using SURF Detector
    int minHessian = 2000;
    cv::Ptr<cv::xfeatures2d::SURF> detector = cv::xfeatures2d::SURF::create( minHessian );
    std::vector<cv::KeyPoint> keypoints_1, keypoints_2;
    detector->detect( img, keypoints_1 );
    detector->detect( img2, keypoints_2 );
    
    //-- Draw keypoints
    cv::Mat img_keypoints_1, img_keypoints_2;
    drawKeypoints( img, keypoints_1, img_keypoints_1, cv::Scalar::all(-1), cv::DrawMatchesFlags::DEFAULT );
    drawKeypoints( img2, keypoints_2, img_keypoints_2, cv::Scalar::all(-1), cv::DrawMatchesFlags::DEFAULT );
    //-- Show detected (drawn) keypoints
    imshow("Keypoints 1", img_keypoints_1 );
    imshow("Keypoints 2", img_keypoints_2 );
    
    cv::Mat descriptors_1, descriptors_2;
    detector->detectAndCompute( img, cv::Mat(), keypoints_1, descriptors_1 );
    detector->detectAndCompute( img2, cv::Mat(), keypoints_2, descriptors_2 );
    
    //-- Step 2: Matching descriptor vectors with a brute force matcher
    cv::BFMatcher matcher(2, true);
    std::vector< cv::DMatch > matches;
    matcher.match( descriptors_1, descriptors_2, matches );
    
    //-- Draw matches
    cv::Mat img_matches;
    drawMatches( img, keypoints_1, img2, keypoints_2, matches, img_matches );
    
    imshow("img_matches", img_matches);
    
    cv::waitKey(0);
    
} // end of Matcher method

