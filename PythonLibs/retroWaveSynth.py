# retroWaveSynth.py - Uses Keras
from tensorflow import keras
from tensorflow.keras import layers

def build_model():
    model = keras.Sequential([
        layers.Dense(32, activation='relu', input_shape=(8,)),
        layers.Dense(1, activation='sigmoid')
    ])
    model.compile(optimizer='adam', loss='binary_crossentropy')
    print('Keras model summary:')
    model.summary()

if __name__ == '__main__':
    build_model()
