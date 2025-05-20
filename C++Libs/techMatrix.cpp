// techMatrix.cpp - Uses OpenCV DNN
#include <opencv2/dnn.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::dnn::Net net = cv::dnn::readNet("model.pb");
    std::cout << "OpenCV DNN model loaded with " << net.getLayerNames().size() << " layers" << std::endl;
    return 0;
}
