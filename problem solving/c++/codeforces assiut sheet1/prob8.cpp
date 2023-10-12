// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int n1, n2;
    n1 = n % 10;
    n2 = (n / 10) % 10;
    if (n1 % n2 == 0 || n2 % n1 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}