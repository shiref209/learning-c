#include <iostream>
using namespace std;
class Rectangle
{
public:
    int *h, *w;
    void area()
    {
        cout << "Area is: " << (*h) * (*w) << endl;
    };

    Rectangle(int a, int b);
    ~Rectangle()
    {
        delete h;
        delete w;
    };
};
Rectangle::Rectangle(int a, int b)
{
    {
        h = new int;
        w = new int;
        *h = a;
        *w = b;
    };
};
enum days
{
    sat,
    sun,
    mon
};
int main()
{
    Rectangle r(2, 3);
    r.area();
    int *ptr;
    int arr[5] = {10, 20, 30, 40, 50};
    cout << arr + 1 << endl;
    cout << arr + 2 << endl;
    ptr = arr;
    days m;
    cout << *(ptr + 1) << endl;
    return 0;
}