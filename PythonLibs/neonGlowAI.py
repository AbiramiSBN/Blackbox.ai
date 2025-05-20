# neonGlowAI.py - Uses ONNX Runtime
import onnxruntime as ort

def create_session(model_path=None):
    sess = ort.InferenceSession(model_path or '')
    print('ONNX Runtime session created:', sess)

if __name__ == '__main__':
    create_session()
