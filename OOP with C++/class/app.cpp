#include <iostream>
using namespace std;

class Car
{
public:
    string color;
    int speed;
    string model;
    void turn_on()
    {
        cout << "Hello To The World" << endl;
    }
    void brake()
    {
        cout << "Stop Now" << endl;
    }
};
int main()
{
    Car honda;
    Car bmw;

    bmw.speed = 100; // Assigning a value to the speed member

    cout << "BMW Speed: " << bmw.speed << endl;

    honda.color = "red";
    honda.turn_on();

    // // Constructor application and encapsulation can be added here.

    return 0;
}
