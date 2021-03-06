#include "opencv2/core.hpp"
#include  "opencv2/imgcodecs.hpp"
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/aruco.hpp>
#include<opencv2/calib3d.hpp>

#include<opencv2/opencv.hpp>

#include <sstream>
#include<iostream>
#include<fstream>

using namespace std;
using namespace cv;

void createArucoMarkers(){
    Mat outputMarker;
    
    Ptr<aruco::Dictionary> markDictionary = aruco::getPredefinedDictionary(aruco::PREDEFINED_DICTIONARY_NAME::DICT_4X4_250);

    for(int i = 0; i <50 ; i++){
        aruco::drawMarker(markDictionary,i,500,outputMarker,1);
        ostringstream convert;
        string imageName = "4*4Marker_";
        convert<< imageName <<i<<".jpg";
        imwrite(convert.str(),outputMarker);
    } 
}

int main(){
    createArucoMarkers();
    return 0 ;
}