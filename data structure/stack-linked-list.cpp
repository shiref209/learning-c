#include <iostream>
using namespace std;

struct node
{
    int value;
    node *next;
};
node *top = NULL;

void display();
void push(int data);
int pop();
int peek();

int main()
{
    push(5);
    push(10);

    push(15);
    peek();
    display();
    pop();
    display();

    return 0;
}

// push
void push(int data)
{
    node *new_node = new node;
    new_node->value = data;

    new_node->next = top;

    top = new_node;
}

// display
void display()
{
    node *current_node = top;
    if (current_node == NULL)
    {
        cout << "stack underflow" << endl;
    }
    else
    {
        while (current_node != NULL)
        {
            cout << current_node->value << endl;
            current_node = current_node->next;
        }
    }
    cout << endl;
}

// pop
int pop()
{
    node *target = top;
    int value;
    if (top == NULL)
    {
        cout << "stack underflow" << endl;

        return -1;
    }
    top = target->next;
    value = target->value;

    delete (target);
    return value;
}
int peek()
{
    if (top == NULL)
    {
        cout << "stack underflow" << endl;

        return -1;
    }
    else
    {
        cout << top->value << endl;
        return top->value;
    }
}