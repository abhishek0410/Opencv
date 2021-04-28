//In this experiment ,we are going to play with the individual pixels of the image.

#include<opencv2/opencv.hpp>
#include<stdint.h>


using namespace std; 
using namespace cv ;

int main(){
    
  /* //********UNCOMMENT  TO SEE PART 1 ************
  
  
//Part 1 : In this part ,we are going to : 
//1a : Load the image in grayscale 
//1b : Transform the pixels  , we will  reduce the pixel  intensity by 1/2 . 
//1c : Display both the images side by side : 


//1a : 
Mat original = imread("sample.jpg",CV_LOAD_IMAGE_GRAYSCALE);
Mat modified = imread("sample.jpg",CV_LOAD_IMAGE_GRAYSCALE);

//1b.
for(int row = 0 ; row<modified.rows; row++){
    for(int col = 0; col <modified.cols; col ++){
        modified.at<uint8_t>(row,col) = modified.at<uint8_t>(row,col)  * 0.5f;
    }
}

//1c : Display both images : 
namedWindow("Display1" , WINDOW_AUTOSIZE);
namedWindow("Display2" , WINDOW_AUTOSIZE);
imshow("Display1",original);
imshow("Display2",modified);    

waitKey();        
 
  
  
 */
 
 //Part 2  ; Iterating over the colored  object 
 //2a : Load the image in grayscale 
//2b : Transform the pixels  , we will  reduce the pixel  intensity by 1/2 . 
//2c : Display both the images side by side : 
 
//2a . Load the image
 Mat original2 = imread("sample.jpg", CV_LOAD_IMAGE_COLOR);
 Mat modified2 = imread("sample.jpg",CV_LOAD_IMAGE_COLOR);
 
 //2b.  Transform the image : 
 for(int row = 0 ; row< modified2.rows; row++){
     for (int col = 0 ; col< modified2.cols; col++){
         //Removing the blue color
         modified2.at<cv::Vec3b>(row, col)[0] = modified2.at<cv::Vec3b>(row,col)[0] *0;
         
     }
 }
 
 //2c. Displaying the image : 
namedWindow("Display1" , WINDOW_AUTOSIZE);
namedWindow("Display2" , WINDOW_AUTOSIZE);
imshow("Display1",original2);
imshow("Display2",modified2);    

waitKey();

 
    
    return 0 ; 
}