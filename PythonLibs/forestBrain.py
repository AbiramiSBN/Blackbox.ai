# forestBrain.py - Uses scikit-learn RandomForest
from sklearn.datasets import load_wine
from sklearn.ensemble import RandomForestClassifier

def train_forest():
    data = load_wine()
    rf = RandomForestClassifier(n_estimators=10)
    rf.fit(data.data, data.target)
    print('RandomForestClassifier trained on Wine dataset')

if __name__ == '__main__':
    train_forest()
