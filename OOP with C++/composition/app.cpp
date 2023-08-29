#include <iostream>
using namespace std;

class Lamp
{
private:
    string color;
    int illumination;

public:
    void start()
    {
        cout << "Lamp is running with white illumination" << endl;
    }
};

class Room
{
private:
    string color;
    Lamp main_lamp;

public:
    void start()
    {
        main_lamp.start();
        cout << "room is open" << endl;
    }
};
int main()
{
    Room r1;
    r1.start();
    return 0;
}