// earthSense.js - Uses Natural
import natural from 'natural';

const tokenizer = new natural.WordTokenizer();
console.log('Tokens:', tokenizer.tokenize('Natural language processing with Natural library.'));
