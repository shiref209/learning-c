#include <iostream>
using namespace std;

class Car
{

public:
    string color;
    int speed;
    string model;
    // constructor definition inside class

    // Car(string color, int speed, string model)
    // {
    //     cout << "I'm the constructor" << endl;
    //     color = color;
    //     speed = speed;
    //     model = model;
    // };
    Car(string color, int speed, string model);
};

// constructor definition outside class
Car::Car(string color, int speed, string model)
{
    cout << "I'm the constructor" << endl;
    color = color;
    speed = speed;
    model = model;
}
int main()
{
    Car honda("red", 200, "civic");
}