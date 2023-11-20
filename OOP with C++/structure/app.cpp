#include <iostream>
#include <string>
using namespace std;

struct Car
{
    int maxSpeed;
    string color;
    string brand;
    void start()
    {
        cout << "Starting the car" << endl;
    }
};
// mainly used when you want fn to return multiple entities as example
struct Shape
{
    int breadth;
    int space;
};
Shape calculate_shape(Shape s1, Shape s2)
{
    struct Shape s3;
    s3.breadth = s1.breadth + s2.breadth;
    s3.space = s1.space + s2.space;
    return s3;
};
int main()
{
    Car c2 = {300, "red", "shark"};
    Car c1;
    c1.start();
    cout << c2.maxSpeed << endl;
    Shape triangle = {10, 20}, rectangle = {100, 200};

    Shape s4 = calculate_shape(triangle, rectangle);
    cout << s4.breadth << endl;

    return 0;
}