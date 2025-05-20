// retroWaveSynth.js - Uses Synaptic
import { Architect } from 'synaptic';

const myNetwork = new Architect.Perceptron(2, 3, 1);
myNetwork.activate([0, 1]);
console.log('Synaptic network activated');
