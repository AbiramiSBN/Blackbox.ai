# monoCipher.py - Uses ONNX Runtime
import onnxruntime as ort

def load_onnx_model(path=''):
    session = ort.InferenceSession(path)
    print('Loaded ONNX model session:', session)

if __name__ == '__main__':
    load_onnx_model()
