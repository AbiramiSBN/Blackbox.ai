// azureNeuron.cpp - Uses TensorFlow C++ API
#include <tensorflow/cc/client/client_session.h>
#include <tensorflow/cc/ops/standard_ops.h>
#include <tensorflow/core/framework/tensor.h>
#include <iostream>

int main() {
    using namespace tensorflow;
    using namespace tensorflow::ops;

    Scope root = Scope::NewRootScope();
    auto A = Const(root, {{1.0f, 2.0f}, {3.0f, 4.0f}});
    auto B = Const(root, {{5.0f, 6.0f}, {7.0f, 8.0f}});
    auto C = MatMul(root.WithOpName("C"), A, B);
    ClientSession session(root);
    std::vector<Tensor> outputs;
    TF_CHECK_OK(session.Run({C}, &outputs));
    std::cout << "Result: " << outputs[0].matrix<float>() << std::endl;
    return 0;
}
