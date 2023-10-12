// https://codeforces.com/contest/17/problem/A

#include <iostream>
using namespace std;
int isPrime(int num);
int main()
{
    int n, k;
    cin >> n >> k;
    int counter = 0;
    int prime1 = 0, prime2 = 0;

    for (int i = 6; i <= n; i++)
    {
        if (i % 2 == 0 || i % 3 == 0)
        {
            continue;
        }
        else
        {
            prime1 = isPrime(i);
        }
        for (int y = prime2 + 1; y < i; y++)
        {
            if (y % 2 == 0 || y % 3 == 0 || y == 0 || y == 1)
            {
                continue;
            }
            prime2 = isPrime(y);
            int equation = prime1 + prime2 + 1;
            if (isPrime(equation) < n && prime1 != 0 && prime2 != 0 && prime1 != prime2)
            {
                counter++;
            }
        }

        // for (int y = 2; y < i; y++)
        // {
        //     if (y % 2 == 0 || y % 3 == 0 || i % y == 0)
        //     {
        //         continue;
        //     }
        //     if ((i - 1) == (y) + (y - 2))
        //     {
        //         counter++;
        //     }
        // }
    }
    if (counter == k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    // cout << isPrime(25) << endl;
    return 0;
}

int isPrime(int num)
{
    for (int x = 2; x < num; x++)
    {
        if (num % x == 0)
        {
            num = 0;
            return num;
            break;
        }

        // return num;
    }
    return num;
}