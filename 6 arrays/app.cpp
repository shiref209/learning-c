#include <iostream>
using namespace std;

int main()
{
    //     // access number of array elements
    //     int nums[6] = {100, 200, 300, 400, 50, 600};
    //     cout << "Number of elements is :" << sizeof(nums) / sizeof(nums[3]);

    // 2D arrays
    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << array[1][1] << "\n"; // 5
    cout << array[1][2] << "\n"; // 6
    cout << array[2][2] << "\n"; // 9

    return 0;
}