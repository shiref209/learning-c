#include <iostream>
#include <vector>
using namespace std;

vector getNums(int num)
{
    vector<int> nums;
    while (num > 0)
    {
        nums.push_back(num % 10);
        num /= 10;
    }

    return nums;
}
