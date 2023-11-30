#include <iostream>
using namespace std;

class Unary
{
    int x, y;

public:
    Unary(int a = 1, int b = 1)
    {
        x = a;
        y = b;
    };
    void showData()
    {
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }
    // Prefix
    Unary operator++()
    {
        x++;
        y++;
        return *this;
    }
    // Postfix
    Unary operator++(int)
    {
        Unary temp;
        // temp.x=x;
        // temp.y=y;
        temp = *this; // temp=values of this class
        x++;
        y++;
        return temp;
    }
    Unary operator-()
    {
        x = -x;
        y = -y;
        return *this;
    }
};

int main()
{
    Unary a(1, 1), b(2, 2), c;
    c = ++a;
    // c.showData();
    // a.showData();
    a++;
    // c.showData();
    // a.showData();
    -a;
    a.showData();
    return 0;
}