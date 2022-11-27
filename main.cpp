#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;
int main(int argc, char** argv )
{

    Mat image;
    image = imread("input.jpeg");
    Mat grayImage;
    cvtColor(image,grayImage,COLOR_BGR2GRAY);
    imshow("RGB image",image);
    imshow("Grayscale image",grayImage);
    waitKey(0);
    return 0;
}