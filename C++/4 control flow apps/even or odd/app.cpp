// even or odd checker

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Please enter the number" << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Number is Even";
    }
    else
    {
        cout << "Number is odd";
    };

    return 0;
}