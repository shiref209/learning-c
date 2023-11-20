#include <iostream>
using namespace std;

class Student
{
protected:
    int gpa;

public:
    Student()
    {
        cout << "im default" << endl;
    };
    Student(int gpa)
    {
        // gpa = 0;
        this->gpa = gpa;
        // cout << gpa << endl;
        cout << "paramaterized" << endl;
    }
    void displayInfo()
    {
        cout << "gpa" << endl;
    }
    // Student(int gpa){
    //     this->gpa=gpa;
    // }
};

class FailedStudent : public Student
{
    string subject;

public:
    FailedStudent(string subject, int gpa) : Student(gpa)
    {
        this->subject = subject;
    }
    void display()
    {
        Student::displayInfo();
        cout << "Failed" << endl;
    }
};
void print(int x)
{
    x = 5;
    cout << x << endl;
};
int main()
{
    // FailedStudent a("math",4);
    // a.display();
    int x = 5;
    int *p = &x;
    cout << &p << endl;
    cout << &x << endl;
    cout << p << endl;
    cout << *p << endl;
    int **p2 = &p;
    cout << p2 << endl;
    cout << *p2 << endl;
    cout << **p2 << endl;
    return 0;
}