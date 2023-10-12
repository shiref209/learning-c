// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int smallestNumber = a < b ? a : b;
    int biggestNumber = a > b ? a : b;

    if (biggestNumber % smallestNumber == 0)
    {
        cout << smallestNumber << endl;
    }
    else
    {
        int divisor;
        for (int i = smallestNumber; i > 0; i--)
        {
            if (smallestNumber % i == 0 && i != smallestNumber && biggestNumber % i == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
