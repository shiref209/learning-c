#include <iostream>
using namespace std;

class Student
{
private:
    int *gpa;

public:
    Student()
    {
        gpa = 0;
        cout << *gpa << endl;
    }
    // Student(int gpa){
    //     this->gpa=gpa;
    // }
};
int main()
{
    Student s;
    Student m = s;
    return 0;
}