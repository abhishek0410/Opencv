#include <opencv2/opencv.hpp>


int main(){
   
cv::Mat test =  cv::imread("sample.jpeg",CV_LOAD_IMAGE_UNCHANGED);
cv::imshow("test",test);
cv::waitKey();
    return 0 ; 
}