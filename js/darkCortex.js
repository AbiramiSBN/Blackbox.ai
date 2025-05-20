// darkCortex.js - Uses Brain.js
import { NeuralNetwork } from 'brain.js';

const net = new NeuralNetwork();
net.train([{ input: { r: 0 }, output: { g: 1 } }]);
const output = net.run({ r: 1 });
console.log('Brain.js output:', output);
