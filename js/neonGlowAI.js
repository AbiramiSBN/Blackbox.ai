// neonGlowAI.js - Uses ConvNetJS
// Include ConvNetJS via <script src="https://cs.stanford.edu/people/karpathy/convnetjs/build/convnet.min.js"></script>

const net = new convnetjs.Net();
net.makeLayers([{ type: 'input', out_sx: 1, out_sy: 1, out_depth: 2 }, { type: 'fc', num_neurons: 3 }, { type: 'softmax' }]);
console.log('ConvNetJS network initialized');
