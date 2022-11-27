#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;
int main(int argc, char** argv )
{

    Mat image;
    image = imread("input.jpeg");
    Mat grayImage;
    vctColor(img,grayImg,COLOR_BGR2GRAY);
    imshow("RGB image",img);
    imshow("Grayscale image",grayImg);
    waitKey(0);
    return 0;
}