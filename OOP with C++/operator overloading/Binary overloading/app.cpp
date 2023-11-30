#include <iostream>
using namespace std;

class Rectangle
{
private:
    int height, width;

public:
    void showValue()
    {
        cout << "Height: " << height << endl;
        cout << "Width: " << width << endl;
    }
    // friend Rectangle add(Rectangle a, Rectangle b);
    Rectangle()
    {
        height = 0;
        width = 0;
    };
    Rectangle(int a, int b)
    {
        height = a;
        width = b;
    };
    // c=a+b
    Rectangle operator+(Rectangle b)
    {
        Rectangle c;
        c.width = width + b.width;
        c.height = height + b.height;
        return c;
    };
    // c=a+10
    Rectangle operator+(int n)
    {
        Rectangle c;
        c.height = height + n;
        c.width = width + 10;
        return c;
    }
    // c=10+a
    friend Rectangle operator+(int n, Rectangle a);
};
// c=10+a
Rectangle operator+(int n, Rectangle a)
{
    Rectangle c;
    c.width = 10 + a.width;
    c.height = 10 + a.height;
    return c;
}

// Rectangle add(Rectangle a, Rectangle b)
// {
//     Rectangle c;
//     c.width = a.width + b.width;
//     c.height = a.height + b.height;
//     return c;
// };
int main()
{
    Rectangle a(3, 3), b(5, 5), c;
    c = a + b;
    c.showValue();
    // c=a+b
    //
    // c=a+10
    c = a + 10;
    c.showValue();

    // c=10+a
    c = 10 + a;
    c.showValue();
    return 0;
}