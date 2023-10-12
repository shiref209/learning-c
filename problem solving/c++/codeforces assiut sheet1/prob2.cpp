// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S

#include <iostream>
using namespace std;

int main()
{
    long double input;
    cin >> input;
    if (input < 0 || input > 100)
    {
        cout << "Out of Intervals" << endl;
    }
    else if (input >= 0 && input <= 25)
    {
        cout << "Interval [0,25]" << endl;
    }
    else if (input > 25 && input <= 50)
    {
        cout << "Interval (25,50]" << endl;
    }
    else if (input > 50 && input <= 75)
    {
        cout << "Interval (50,75]" << endl;
    }
    else if (input > 75 && input <= 100)
    {
        cout << "Interval (75,100]" << endl;
    }
    else
    {
        cout << "Out of Intervals" << endl;
    }
    return 0;
}