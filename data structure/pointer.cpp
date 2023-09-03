#include <iostream>
using namespace std;

int main()
{
    int x = 20;
    int *ptr = &x;
    cout << "value :" << x << endl;
    cout << "memory location :" << &x << endl;

    cout << "Value of ptr which is memory location of x " << ptr << endl;
    cout << "Value of memory location, value of x " << *ptr << endl;

    cout << "Memory location of ptr itself " << &ptr << endl;

    // cout <<*x;

    return 0;
}