// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // accepted
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (i == 2)
        {
            cout << i << " ";
            continue;
        }
        for (int k = 2; k <= n; k++)
        {
            if (i % k == 0 && i != k)
            {
                break;
            }
            else if (i % k == 0 && i == k)
            {
                cout << i << " ";
                break;
            }
            // else if (i%k !=0 && i==k){
            //     cout << i << " ";
            //     break;
            // }
            else
            {
                continue;
            }
        }
    }

    // // didn't pass
    // int n;
    // cin >> n;

    // for (int i = 2; i <= n; i++)

    // {
    //     int squareRoot = isnan(sqrt(i)) ? 0 : sqrt(i);

    //     if (i == 2 || i == 3 || i == 5 || i == 7)
    //     {
    //         cout << i << " ";
    //         continue;
    //     }
    //     else if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
    //     {
    //         cout << i << " ";
    //     }
    //     else if (squareRoot != 0 && squareRoot % 2 != 0 && squareRoot % 3 != 0 && squareRoot % 5 != 0 && squareRoot % 7 != 0)
    //     {
    //         cout << i << " ";
    //     }
    //     else
    //     {
    //         continue;
    //     }
    // }

    return 0;
}