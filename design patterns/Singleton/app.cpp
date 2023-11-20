#include <iostream>
using namespace std;

int count = 0;
class Singleton
{
private:
    static Singleton *instancePtr;
    Singleton()
    {
        cout << "Constructor called" << endl;
    }

public:
    ~Singleton()
    {
        cout << "Destructor called" << endl;
    }

    // delete objs created
    static Singleton *getInstance()
    {
        if (instancePtr == NULL)
        {
            instancePtr = new Singleton();
            return instancePtr;
        }

        return instancePtr;
    }
    void IncrementCount()
    {
        count++;
    }
    int getCount()
    {
        cout << count << endl;
        return count;
    }
};
Singleton *Singleton::instancePtr = NULL;
int main()
{

    Singleton *s1 = Singleton::getInstance();
    s1->IncrementCount();
    s1->getCount();
    delete s1;
    return 0;
}