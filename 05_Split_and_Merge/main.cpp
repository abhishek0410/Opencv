//In this experiment ,we are going to illustrate , Split and Merge from thje 
#include<opencv2/opencv.hpp>
#include<stdint.h>
#include<array>
#include<vector>

using namespace std; 
using namespace cv; 

int main(){
    
    //Common Parts : 
    //Loading the image : 
    Mat modified1 = imread("sample.jpg",CV_LOAD_IMAGE_COLOR);

    /*This works : 
    *********************/
    vector<cv::Mat> rgb ;
    cv::split(modified1 , rgb); 
    /********************/
    
    /* Does not work
    ********************/
      Mat rgb1[3]  ;
    //Mat *rgb1 = &modified1;
    cv::split(modified1 , rgb1); 
    /********************/
    
    
    /* Does not work
    ********************/
//vector<cv::Mat*> rgb2{nullptr,nullptr,nullptr} ;
     //vector<cv::Mat*> rgb2{&modified1};

//   cv::split(modified1 , rgb2); 
    /********************/
    
    //Display the image : 
    cv::imshow("display_screen",rgb1[2]);
    waitKey();

    return 0 ; 
}


    //Part 1a : Splitting the image into RGB : 
    //1b: Displayiing the image which was split : 
    
    //Part2a : 
    //2b : Remerging the image : 
    //2c: Displaying the image which was re merged