#include<opencv2/opencv.hpp>

int main(){
    
    //Loading the file 
    cv::Mat image1 = cv::imread("sample.jpg",CV_LOAD_IMAGE_UNCHANGED);
    cv::Mat image2 = cv::imread("sample.jpg", CV_LOAD_IMAGE_GRAYSCALE);
     
    //Show the image : 
    cv::namedWindow("Color",CV_WINDOW_FREERATIO);

    cv::namedWindow("Fixed", CV_WINDOW_AUTOSIZE);
    
        
    
    cv::imshow("color",image1);
    cv::imshow("grayscale",image2);
    

    //Resizing the windows : 
    cv::resizeWindow("Color",50, 100);
    cv::resizeWindow("Fixed",image1.cols/2, image1.rows/2 );

    
    
    cv::waitKey();
    
    return 0 ; 
}