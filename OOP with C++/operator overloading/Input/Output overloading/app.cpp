#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;

public:
    Rectangle(int x = 1, int y = 1)
    {
        height = x;
        width = y;
    }
    void showValue()
    {
        cout << height << ", " << width << endl;
    };
    friend istream &operator>>(istream &input, Rectangle r1)
    {
        input >> r1.height >> r1.width;

        return input;
    }
};

int main()
{
    Rectangle r1;
    cin >> r1;
    r1.showValue();
    return 0;
}