#include <opencv2/opencv.hpp>


int main(){
   
    
//Loading
cv::Mat  testcolor = cv::imread("/home/abhishek/Desktop/C++_Projects/Opencv/02_Loading_Showing_Saving/sample.jpg",cv::IMREAD_COLOR);
// cv::Mat testgray = cv::imread("sample.jpg",CV_LOAD_IMAGE_GRAYSCALE);

//Showing
cv::imshow("name_of_image_in_Window", testcolor);
// cv::imshow("gray image ", testgray);


//Saving the grayscale image : 
// cv::imwrite("outpugray.jpg", testgray);


cv::waitKey();
    return 0 ; 
}