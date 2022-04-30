import numpy as np

# a = np.array([[3,4,3,5],[23,32,45,21]],dtype=np.int8)
# print(a)

# b = np.array([3,2,3], dtype=np.int64, ndmin=3)
# print(b)

# c = np.array([complex(2,1)], dtype=complex)
# print(c)

# # dtypes => https://www.tutorialspoint.com/numpy/numpy_data_types.htm

# print(b.shape)

# a = a.reshape(4,2)
# print(a)

# p = np.arange(22)
# print(p)

# pq = np.arange(100, 130, 3)
# print(pq)

# print(p.reshape(2,11,1))

# # array maker methods

# x = np.empty([3,4], dtype=np.int64)
# print(x)

# z = np.zeros([5,9], dtype=np.int8)
# print(z)

# o = np.ones([4,8], dtype=int)
# print(o)

# # np.asarray([1,2]) is same as np.array([1,2])

# y = np.linspace(10,200, 6)
# print(y)

# # slicing is fun 

# r = np.arange(10)
# print(r[:])
# print(r[::-1])
# print(r[2:7])
# print(r[1:9:3])
# print(r[3:])
# print(r[::3])
# print(r[:-3])

# grid = np.array([[1,2,3],[4,5,6],[7,8,9]])
# print(grid[...,1])
# print(grid[1,...])
# print(grid[...,1:])

# print(grid[1:2,:2])
# print(grid[grid>5])

# # transpose mania 

# print(grid.T)
# for i in grid.flat:
#     print(i)

# # stats 

# t = np.array([1,2,3,3,5,55,44,223,2,2,5])
# print(np.mean(t))
# print(np.median(t))
# print(np.std(t))
# print(np.var(t))
# print(np.bincount(t)) 

# print(np.cumsum(t))

# # matrix manipulation 

# r = np.array([[1,2],[3,4]])
# y = np.array([[5,4],[7,4]])

# print(np.matmul(r,y))

# dot examples 

weather = np.array([[39,40,45],[2,3,4]])
weights = np.array([3,5,2])
print("normla")
print(np.dot(weather, weights))
print("adc")
print(weather * weights)

# http://hub.jovian.ml/wp-content/uploads/2020/08/climate.csv 

data = np.genfromtxt(r"C:\Users\dbaks\OneDrive\Desktop\desktop\programming\python\numPy\climate.txt", delimiter = ',', skip_header=1)
print(data[0]*weights)
print(data@weights)

data = data@weights
print("maxa")
print(np.max(data))
np.savetxt(r"C:\Users\dbaks\OneDrive\Desktop\desktop\programming\python\numPy\climate_results.txt", data, fmt = "%.2f",header = 'temp,rainfall,humidity',comments="")


x = np.pad(x, pad_width=1, mode='constant', constant_values=0)

a = a[a[:,2].argsort()] # First sort doesn't need to be stable.
a = a[a[:,1].argsort(kind='mergesort')]
a = a[a[:,0].argsort(kind='mergesort')]