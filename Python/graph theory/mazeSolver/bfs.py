from random import seed
from random import randint
# seed random number generator
seed(1)
# generate some integers
for k in range(1000):
	value = randint(1, 1000)
	print(value)


