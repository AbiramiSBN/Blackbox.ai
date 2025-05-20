# azureNeuron.py - Uses TensorFlow
import tensorflow as tf

def load_model():
    model = tf.keras.applications.MobileNetV2(weights='imagenet')
    print('TensorFlow MobileNetV2 loaded:')
    model.summary()

if __name__ == '__main__':
    load_model()
