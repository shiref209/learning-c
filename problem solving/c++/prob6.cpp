// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    // int multiplaction1 = a * b;
    // int multiplication2 = c * b;
    // int summation = a + b;
    // int substraction = a - b;
    // if (multiplaction1 + c == d || multiplaction1 - c == d || multiplication2 + a == d || a - multiplication2 == d || summation - c == d || substraction + c == d)
    if (a + b - c == d || a + b * c == d || a * b + c == d || a * b - c == d || a - b * c == d || a - b + c == d)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}