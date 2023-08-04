#include <iostream>
using namespace std;

int main()
{
    // access number of array elements
    int nums[6] = {100, 200, 300, 400, 50, 600};
    cout << "Number of elements is :" << sizeof(nums) / sizeof(nums[3]);
    return 0;
}