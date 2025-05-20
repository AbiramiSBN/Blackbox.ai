// darkCortex.cpp - Uses LibTorch
#include <torch/torch.h>
#include <iostream>

int main() {
    torch::Tensor tensor = torch::rand({2,3});
    std::cout << "Random tensor:\n" << tensor << std::endl;
    return 0;
}
