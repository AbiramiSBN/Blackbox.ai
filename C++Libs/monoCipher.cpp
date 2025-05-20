// monoCipher.cpp - Uses Dlib DNN
#include <dlib/dnn.h>
#include <iostream>

using namespace dlib;

int main() {
    using net_type = loss_multiclass_log<fc<2, relu<fc<5, input<matrix<float>>>>>>;
    net_type net;
    matrix<float> sample(1,5);
    sample = 1;
    auto out = net(sample);
    std::cout << "Dlib network inference output: " << out << std::endl;
    return 0;
}
