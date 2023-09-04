#include <iostream>
using namespace std;
#define size 5

int stack[size], top = -1;
void push(int value);
int pop();
int peek();
void display();

int main()
{
    push(5);
    push(15);
    push(25);
    push(35);
    push(45);
    peek();
    display();
    pop();
    display();

    return 0;
}
// push method
void push(int value)
{
    if (top == size - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = value;
    }
}
// pop method
int pop()
{
    if (top == -1)
    {
        cout << "Stack underflow\n";
    }
    else
    {
        return stack[top--];
    }
}
// peek method
int peek()
{
    if (top == -1)
    {
        cout << "Stack underflow\n";
    }
    else
    {
        return stack[top];
    }
}
// display method
void display()
{
    if (top == -1)
    {
        cout << "Stack underflow\n";
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            if (i == -1)
            {
                break;
            }
            cout << stack[i] << endl;
        }
    }
}