# techMatrix.py - Uses JAX
import jax.numpy as jnp
from jax import random

def matrix_ops():
    key = random.PRNGKey(0)
    x = random.normal(key, (3, 3))
    print('JAX matrix:
', x)

if __name__ == '__main__':
    matrix_ops()
