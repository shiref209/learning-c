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

    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0 || i % 3 == 0 || i == n || prime1 == n - 1 || prime2 == n - 1)
        {
            continue;
        }
        else
        {
            prime2 = prime1;
            prime1 = isPrime(i);
        }
        int equation = prime1 + prime2 + 1;
        if (prime1 != 0 && prime2 != 0 && prime1 != prime2 && equation < n)
        {
            int result = isPrime(equation);
            if (result != 0 && result < n)
            {
                counter++;
            }
        }
    }
    if (counter == k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
    }
    return num;
}