// minimalMorph.js - Uses ml5.js
// Note: Ensure ml5.js is loaded via CDN <script src="https://cdnjs.cloudflare.com/ajax/libs/ml5/0.6.0/ml5.min.js"></script>

const classifier = ml5.imageClassifier('MobileNet', () => {
  console.log('ml5.js MobileNet model ready');
});
