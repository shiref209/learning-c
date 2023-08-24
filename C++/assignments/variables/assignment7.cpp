#include <iostream>
using namespace std;
// with the next line
int num = 50;

int read()
{
    // the next line is switched
    int num = 100;
    cout << num;
    return 0;
}

int play()
{
    int num = 200;
    read();
    return 0;
}

int main()
{
    play();
    return 0;
}