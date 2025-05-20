// techMatrix.js - Uses TensorFlow.js
import * as tf from '@tensorflow/tfjs';

async function run() {
  const data = tf.tensor([1, 2, 3, 4]);
  console.log('TensorFlow.js tensor:', data.toString());
}
run();
