# kidLogic.py - Uses NLTK
import nltk
from nltk.tokenize import word_tokenize

def tokenize_sample():
    nltk.download('punkt', quiet=True)
    text = 'NLTK makes simple NLP tasks easy.'
    tokens = word_tokenize(text)
    print('NLTK tokens:', tokens)

if __name__ == '__main__':
    tokenize_sample()
