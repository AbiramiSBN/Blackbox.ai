# darkCortex.py - Uses PyTorch
import torch
import torch.nn as nn

class SimpleNN(nn.Module):
    def __init__(self):
        super(SimpleNN, self).__init__()
        self.fc = nn.Linear(10, 1)

    def forward(self, x):
        return self.fc(x)

def main():
    model = SimpleNN()
    x = torch.randn(1, 10)
    out = model(x)
    print('PyTorch output:', out)

if __name__ == '__main__':
    main()
