//
//  main.cpp
//  playground
//
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

using namespace cv;
using namespace std;

#define w 400

using namespace cv;
using namespace cv::xfeatures2d;

int main() {
    
    margusja::C1::Match(); // call to Matcher.cpp
    
    // random number generator
    //RNG rng( 0xFFFFFFFF );
    
    //![create_images]
    /// Windows names
//    char atom_window[] = "Drawing 1: Atom";
//    char rook_window[] = "Drawing 2: Rook";
    
    /// Create black empty images
    //Mat atom_image = Mat::zeros( w, w, CV_8UC3 );
    //Mat rook_image = Mat::zeros( w, w, CV_8UC3 );
    //![create_images]
    
    /// Now, let's draw some lines
//    int c = Drawing_Random_Lines(rook_image, rook_window, rng);
//    if( c != 0 ) return 0;
    
    /// 2.c. Create a few lines
//    MyLine( rook_image, Point( 0, 15*w/16 ), Point( w, 15*w/16 ) );
//    MyLine( rook_image, Point( w/4, 7*w/8 ), Point( w/4, w ) );
//    MyLine( rook_image, Point( w/2, 7*w/8 ), Point( w/2, w ) );
//    MyLine( rook_image, Point( 3*w/4, 7*w/8 ), Point( 3*w/4, w ) );
    
    /// 3. Display your stuff!
    //imshow( atom_window, atom_image );
    //moveWindow( atom_window, 0, 200 );
    //imshow( rook_window, rook_image );
    //moveWindow( rook_window, w, 200 );
    
//    Mat M(2,2,1,Scalar(10,10,10));
//    Mat N(2,2,1,Scalar(2,3,4));
//    cout << "M = " << endl << " " << M << endl << endl;
//    cout << "N = " << endl << " " << N << endl << endl;
    
    //Mat O = M.mul(N);
    //cout << "Element-wise multiplication M and N = " << endl << " " << O << endl << endl;
    
    //Mat P = M + N;
    //cout << "Add M and N = " << endl << " " << P << endl << endl;
    
    
    //Mat G = gemm(M, N, 0.0, G)
    
    //cout << "Margusja testib" << endl;
    
//    Mat A = (Mat_<float>(2, 5) << 1, 2, 3, 4, 5, 7, 8, 9, 10, 11);
//    cout << "A = " << endl << " " << A << endl << endl;
//    Mat A1;
//    log(A, A1);
//    cout << "A1 = " << endl << " " << A1 << endl << endl;
//
//    // Load an color image in grayscale
//    Mat img = imread("/Users/margusja/Pictures/faces/margusja2.jpg", 1);
//    Mat img2 = imread("/Users/margusja/Pictures/faces/margusja2_2.png",1);
//    Mat blobimage = imread("/Users/margusja/Documents/XCode/playground/blob.jpg",0);
    
    //Mat rgb[3];   //destination array
    //split(img,rgb);
    
    //by default opencv put channels in BGR order , so in your situation you want to copy the first channel which is blue. Set green and red channels elements to zero.
//    rgb[1]=Mat::zeros(img.rows, img.cols, CV_8UC1); // green channel is set to 0
//    rgb[2]=Mat::zeros(img.rows, img.cols, CV_8UC1);// red channel is set to 0
    
    //then merge them back
    //Mat out;
    //merge(rgb,3,out);
    //out = img - img2;
    //cv::bilateralFilter(img, out, 9, 150, 150);
    //cv::blur(img, out, Size(30,30)); // muudame pildi uduseks. Mida suurem kernel, seda udusem
//    Mat kern = (Mat_<char>(3,3) <<  0, -1,  0,
//                                    -1,  5, -1,
//                                    0, -1,  0);
    //cv::filter2D(img, out, img.depth(), kern); // sharpeness. Kernel is fixed
    
//    double beta = ( 1.0 - 0.5 );
//    addWeighted( img, 0.5, img2, beta, 0.0, out); // another version to add two pictures
//
//    string filename = "/Users/margusja/I.xml";
//    FileStorage fs(filename, FileStorage::WRITE);
//    fs << "I" << img;
    
    
    //Ptr<SimpleBlobDetector> detector = SimpleBlobDetector::create(params);
    // Storage for blobs
    //std::vector<KeyPoint> keypoints;
    
    // Detect blobs
    //detector->detect( blobimage, keypoints);

    // Draw detected blobs as red circles.
    // DrawMatchesFlags::DRAW_RICH_KEYPOINTS flag ensures
    // the size of the circle corresponds to the size of blob
    //drawKeypoints( blobimage, keypoints, out, Scalar(0,0,255), DrawMatchesFlags::DRAW_RICH_KEYPOINTS );
    
//    cout << "Image heigth: " << rows << " cols: " << cols << endl;
    
    //imshow("Input",img);
//    imshow("Result",out);
    
    //waitKey(0);
    
    return(0);
}
