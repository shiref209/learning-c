#include <iostream>
using namespace std;

class Person
{
    // private:
    //     int age;
    //     string name;
    //     string college;
    //     string job;
    //     bool is_married;

public:
    int age;
    string name;
    string college;
    string job;
    bool is_married;
    void sayHello()
    {
        cout << "Helloo world" << endl;
    }

    // setter and getter
    // int get_age()
    // {
    //     return age;
    // }
    // void set_age(int y)
    // {
    //     age = y;
    // }
    // string get_name()
    // {
    //     return name;
    // }
    // void set_name(string y)
    // {
    //     name = y;
    // }

    // constructor
    Person(string x, int y, bool z)
    {
        cout << "I'm parent constructor" << endl;
        name = x;
        age = y;
        is_married = z;
    }
};
// inheritance
class Boy : public Person
{
public:
    int id;
};
int main()
{

    // Person ahmed;
    // ahmed.set_name("Ahmed");
    // ahmed.set_age(30);

    // string name = ahmed.get_name();
    // int age = ahmed.get_age();

    // using constructor
    Person ahmed("Mesho", 30, true);

    cout << ahmed.name << endl;
    cout << ahmed.age << endl;

    // inheritance
    // Boy maged;
    // maged.set_name("Maged");
    // maged.set_age(25);
    return 0;
}