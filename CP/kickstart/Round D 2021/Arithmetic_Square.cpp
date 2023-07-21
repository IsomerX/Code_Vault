<<<<<<< HEAD
// You are given a 3×3 grid of integers. Let Gi,j denote the integer in the i-th row and j-th column of the grid, where i and j are 0-indexed. The integer in the middle of the grid, G1,1, is missing. Find the maximum number of rows, columns, and diagonals of this square, that form sequences which are arithmetic progressions. You can replace the missing number with any integer.

// An arithmetic progression (also known as arithmetic sequence) is a sequence of numbers such that the difference between consecutive terms is constant. In mathematical terms, this can be represented as an=an−1+d, where d is the common difference. In this problem, a sequence can be the 3 numbers in either a row, column or diagonal. We are looking to replace the missing value by an integer that maximizes the number of arithmetic progressions that can be found in the resulting set of sequences.

// Two sequences are considered different if they are from different rows, columns, or diagonals. For example, the sequence {2,4,6} across the middle row and {2,4,6} across the top row will be counted as two sequences but the sequences {2,4,6} and {6,4,2} across the same row, column, or diagonal will be counted as one sequence.

// Sample Input
// 3
// 3 4 11
// 10 9
// -1 6 7
// 4 1 6
// 3 5
// 2 5 6
// 9 9 9
// 9 9
// 9 9 9

// Sample Output
// Case #1: 4
// Case #2: 3
// Case #3: 8

// Explanation

// Case #1: The sequence {2,4,6} across the middle row and {2,4,6} across the top row are counted as two sequences but the sequences {2,4,6} and {6,4,2} across the same row, column, or diagonal will be counted as one sequence.

// Case #2: The sequence {2,4,6} across the middle row and {2,4,6} across the top row are counted as two sequences but the sequences {2,4,6} and {6,4,2} across the same row, column, or diagonal will be counted as one sequence.

// Case #3: The sequence {2,4,6} across the middle row and {2,4,6} across the top row are counted as two sequences but the sequences {2,4,6} and {6,4,2} across the same row, column, or diagonal will be counted as one sequence.

// The maximum number of sequences is 4.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



=======
// You are given a 3×3 grid of integers. Let Gi,j denote the integer in the i-th row and j-th column of the grid, where i and j are 0-indexed. The integer in the middle of the grid, G1,1, is missing. Find the maximum number of rows, columns, and diagonals of this square, that form sequences which are arithmetic progressions. You can replace the missing number with any integer.

// An arithmetic progression (also known as arithmetic sequence) is a sequence of numbers such that the difference between consecutive terms is constant. In mathematical terms, this can be represented as an=an−1+d, where d is the common difference. In this problem, a sequence can be the 3 numbers in either a row, column or diagonal. We are looking to replace the missing value by an integer that maximizes the number of arithmetic progressions that can be found in the resulting set of sequences.

// Two sequences are considered different if they are from different rows, columns, or diagonals. For example, the sequence {2,4,6} across the middle row and {2,4,6} across the top row will be counted as two sequences but the sequences {2,4,6} and {6,4,2} across the same row, column, or diagonal will be counted as one sequence.

// Sample Input
// 3
// 3 4 11
// 10 9
// -1 6 7
// 4 1 6
// 3 5
// 2 5 6
// 9 9 9
// 9 9
// 9 9 9

// Sample Output
// Case #1: 4
// Case #2: 3
// Case #3: 8

// Explanation

// Case #1: The sequence {2,4,6} across the middle row and {2,4,6} across the top row are counted as two sequences but the sequences {2,4,6} and {6,4,2} across the same row, column, or diagonal will be counted as one sequence.

// Case #2: The sequence {2,4,6} across the middle row and {2,4,6} across the top row are counted as two sequences but the sequences {2,4,6} and {6,4,2} across the same row, column, or diagonal will be counted as one sequence.

// Case #3: The sequence {2,4,6} across the middle row and {2,4,6} across the top row are counted as two sequences but the sequences {2,4,6} and {6,4,2} across the same row, column, or diagonal will be counted as one sequence.

// The maximum number of sequences is 4.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
