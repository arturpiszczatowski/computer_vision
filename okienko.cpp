//
// Created by s20487 on 10.11.2021.
//

#include "okienko.h"
#include <opencv.hpp>
#include <highgui/highgui_c.h>
#include <iostream>
int main( int argc, char** argv )
{
    cv::namedWindow("Okienko Prawie Inteligentne", 1);
    cv::waitKey(0);
    return 0;
}