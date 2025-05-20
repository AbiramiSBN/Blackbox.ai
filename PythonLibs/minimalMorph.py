# minimalMorph.py - Uses scikit-learn
from sklearn.datasets import load_iris
from sklearn.tree import DecisionTreeClassifier

def train_classifier():
    data = load_iris()
    clf = DecisionTreeClassifier()
    clf.fit(data.data, data.target)
    print('scikit-learn DecisionTreeClassifier trained on Iris dataset')

if __name__ == '__main__':
    train_classifier()
