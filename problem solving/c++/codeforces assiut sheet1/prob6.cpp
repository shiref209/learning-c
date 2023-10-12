// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H
#include <iostream>
using namespace std;

int main()
{
    // didn't pass
    double n, k, a;
    cin >> n >> k >> a;
    long long operation = (n * k) / a;
    double test = (n * k) / a;
    if (test - operation > 0)
    {
        cout << "double\n";
    }
    else if (operation > 2147483647)
    {
        cout << "long long\n";
    }
    else
    {
        cout << "int\n";
    }
    return 0;
}