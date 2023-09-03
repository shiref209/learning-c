#include <iostream>
using namespace std;

struct student
{
    int grade;
    string name;
    double percentage;
};

int main()
{
    student s1 = {
        60, "ahmed", 55.5};
    s1.grade = 80;
    cout << s1.name << endl;
    cout << s1.grade;
    return 0;
}