
#include <iostream>
using namespace std;

int main()
{
    // 1. count even and positive numbers
    int numbers[] = {10, 15, -20, -40, 30, 45};
    int result = 0;
    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] > 0 && numbers[i] % 2 == 0)
        {
            result++;
        }
    }
    cout << result;
    return 0;
}