//This code runs perfectly
#include<opencv2/opencv.hpp>
#include <stdint.h>
#include<iostream>

using namespace std; 
using namespace cv;

int main(){
    Mat frame ; 
    
    VideoCapture vid(0);
    if(!vid.isOpened()){
        return -1;
    }
    while(vid.read(frame)){
        imshow("webcam",frame);
           auto key =  waitKey(25);
       cout<<key<<endl;
            if(key!=255 ){
           cout<<key<<endl;
              cout<<"Agains"<<endl;
            break;
        }       
    }
    
    return 0;
}