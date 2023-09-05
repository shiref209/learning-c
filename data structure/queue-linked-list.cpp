#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;
};
Node *rear = NULL;
Node *front = NULL;

void enqueue(int data);
void dequeue();
int peek();
void display();

int main()
{
    enqueue(5);
    enqueue(15);
    enqueue(25);
    enqueue(35);
    display();
    dequeue();
    display();

    return 0;
}

void enqueue(int data)
{
    Node *new_node = new Node;
    new_node->next = NULL;
    new_node->value = data;

    if (rear == NULL)
    {
        front = rear = new_node;
    }
    else
    {
        rear->next = new_node;
        rear = new_node;
    }
}
void dequeue()
{
    if (rear == NULL)
    {
        cout << "queue is empty" << endl;
    }
    else if (front->next == NULL)
    {
        Node *ptr = front;
        front = rear = NULL;
        delete (ptr);
    }
    else
    {
        Node *ptr = front;
        front = ptr->next;
        delete (ptr);
    }
}
void display()
{
    if (rear == NULL)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        Node *current = front;
        while (current != NULL)
        {
            cout << current->value << endl;
            current = current->next;
        }
    }
}