// retroWaveSynth.cpp - Uses tiny-dnn
#include "tiny_dnn/tiny_dnn.h"
#include <iostream>

int main() {
    tiny_dnn::network<tiny_dnn::sequential> nn;
    nn << tiny_dnn::layers::fc(4, 3) << tiny_dnn::activation::relu();
    std::cout << "Network topology created with tiny-dnn" << std::endl;
    return 0;
}
