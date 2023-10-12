// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
#include <iostream>
using namespace std;

void sum(int x, int y);

int main()
{
    int l, r;

    while (true)
    {
        cin >> l >> r;

        if (l <= 0 || r <= 0)
        {
            break; // Terminate the program when either l or r is less than or equal to zero
        }

        sum(l, r);
    }

    return 0;
}

void sum(int x, int y)
{
    int total = 0;
    for (int i = min(x, y); i <= max(x, y); i++)
    {
        cout << i << " ";
        total += i;
    }
    cout << "sum =" << total << endl;
}
