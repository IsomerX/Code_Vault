# Given an array A1,A2…AN, find the minimum number of operations (possibly zero) required to convert all integers in A to 0.

# In one operation, you

# choose a non-negative integer p (p≥0),
# select at most K indices in the array A, and
# for each selected index i, replace Ai with Ai⊕2p. Here, ⊕ denotes bitwise XOR.

# For example, given the array A = [0,1,1,0] and K = 3, you can convert all elements in A to 0 in just one operation.
# You can also convert all elements in A to 0 in just two operations.
# You can convert all elements in A to 0 in at most three operations.
# You cannot convert all elements in A to 0 in more than three operations.
# Write a function:
# def solution(A, K)
# that, given an array A of N integers and an integer K, returns the minimum number of operations to convert all elements in A to 0.
# If it is impossible to convert all elements in A to 0, return -1.
# For example, given K = 3 and array A = [0, 1, 1, 0], the function should return 2, as explained above.
# Given K = 3 and array A = [1, 1, 1, 1, 0, 0, 1, 1, 1, 1], the function should return -1.
# Assume that:
# N is an integer within the range [1..100,000];
# K is an integer within the range [0..100,000];

# Complexity:
# expected worst-case time complexity is O(N);
# expected worst-case space complexity is O(N), beyond input storage (not counting the storage required for input arguments).
# Elements of input arrays can be modified.

