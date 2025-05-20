# earthSense.py - Uses spaCy
import spacy

def tokenize_text(text):
    nlp = spacy.load('en_core_web_sm')
    doc = nlp(text)
    tokens = [token.text for token in doc]
    print('spaCy tokens:', tokens)

if __name__ == '__main__':
    sample = 'Natural language processing with spaCy library.'
    tokenize_text(sample)
