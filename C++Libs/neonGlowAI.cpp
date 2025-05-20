// neonGlowAI.cpp - Uses ONNX Runtime C++ API
#include <onnxruntime_cxx_api.h>
#include <iostream>

int main() {
    Ort::Env env(ORT_LOGGING_LEVEL_WARNING, "test");
    Ort::SessionOptions session_options;
    Ort::Session session(env, "model.onnx", session_options);
    std::cout << "ONNX Runtime session created successfully" << std::endl;
    return 0;
}
