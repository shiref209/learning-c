#include <iostream>
using namespace std;

class Relational
{
    int x, y, z;

public:
    Relational(int a = 0, int b = 0, int c = 0)
    {
        x = a;
        y = b;
        z = c;
    };
    void show()
    {
        cout << x << endl;
        cout << y << endl;
        cout << z << endl;
    }
    bool operator==(Relational R)
    {
        return (x == R.x && y == R.y && z == R.z);
    };
    bool operator!=(Relational R)
    {
        return (x != R.x || y != R.y || z != R.z);
    }
};

int main()
{
    Relational R1(5, 5, 5), R2(10, 10, 10), R3(5, 5, 5);
    if (R1 == R3)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    if (R1 != R3)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}