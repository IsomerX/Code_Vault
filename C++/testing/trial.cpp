#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

const int n = 20;

int kadane_algorithm(std::vector<int> &a)
{
    int max_so_far = 0, max_ending_here = 0;
    for (int i = 0; i < a.size(); i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}

int main()
{
    // initialising the array --start

    std::srand(unsigned(std::time(nullptr)));
    std::vector<int> number_array(n);
    std::generate(number_array.begin(), number_array.end(), std::rand);

    // initialising the array --end

    int max_sum = kadane_algorithm(number_array);

    std::cout << max_sum << std::endl;

    return 0;
}