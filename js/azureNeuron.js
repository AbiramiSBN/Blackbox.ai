// azureNeuron.js - Uses TensorFlow.js
import * as tf from '@tensorflow/tfjs';

async function loadModel() {
  const model = await tf.loadLayersModel('https://tfhub.dev/tensorflow/pose_detection/movenet/singlepose/lightning/4/default/1', { fromTFHub: true });
  console.log('TensorFlow.js model loaded:', model);
}
loadModel();
