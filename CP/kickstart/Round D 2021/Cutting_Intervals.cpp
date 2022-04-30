// You are given N intervals. An interval can be represented by two positive integers Li and Ri - the interval starts at Li and ends at Ri, represented as [Li,Ri]. Intervals may not be unique, so there might be multiple intervals with both equal Li and equal Ri.

// You are allowed to perform a maximum of C cuts. A cut at X will cut all intervals [L,R] for which L<X and X<R. Cutting an interval at X is defined as splitting the interval into two intervals - [L,X] and [X,R]. Note that cuts can only be performed at integer points. Also, cutting at an endpoint of an interval (X=L or X=R) has no effect and does not split the interval.

// You need to find the maximum number of intervals that can be obtained through a maximum of C cuts.

// Sample Input
// 1
// 3 3
// 1 3
// 2 4
// 1 4

// Sample Output
// Case #1: 7

// Explanation
// Intervals are 1,2,3,4,5,6,7.
// 1. We can cut at 1 to obtain [1,2,3,4,5,6,7] and [2,3,4,5,6,7].
// 2. We can cut at 2 to obtain [1,2,3,4,5,6,7] and [3,4,5,6,7].
// 3. We can cut at 3 to obtain [1,2,3,4,5,6,7] and [4,5,6,7].
// 4. We can cut at 4 to obtain [1,2,3,4,5,6,7] and [5,6,7].
// 5. We can cut at 5 to obtain [1,2,3,4,5,6,7] and [6,7].
// 6. We can cut at 6 to obtain [1,2,3,4,5,6,7] and [7].
// 7. We can cut at 7 to obtain [1,2,3,4,5,6,7].

// So, the maximum number of intervals obtained through C cuts is 7.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, c;
    vector<vector<int>> intervals;
    int max_intervals = 0;
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        vector<int> interval;
        cin >> interval[0] >> interval[1];
        intervals.push_back(interval);
    }
    sort(intervals.begin(), intervals.end());
    int count = 0;
    for (int i = 0; i < intervals.size(); i++)
    {
        int j = i + 1;
        while (j < intervals.size() && intervals[j][0] - intervals[i][1] <= c)
        {
            j++;
        }
        count += j - i - 1;
        i = j - 1;
    }
    cout << count << endl;
    return 0;
}
