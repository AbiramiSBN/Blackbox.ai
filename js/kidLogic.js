// kidLogic.js - Uses Compromise
import nlp from 'compromise';

const doc = nlp('Compromise offers simple NLP for the browser');
console.log('People:', doc.people().out('array'));
