#include <iostream>
using namespace std;
#define size 5
int queue[size];
int front = -1, rear = -1;
void enqueue(int value);
void display();
void dequeue();
int peek();
void display();

int main()
{
    enqueue(5);
    enqueue(15);

    enqueue(25);

    enqueue(35);

    enqueue(45);
    peek();
    display();
    dequeue();
    dequeue();
    display();

    return 0;
};

void enqueue(int value)
{
    if (rear == size - 1)
    {
        cout << "Queue is full\n";
        return;
    }
    else
    {
        if (front == -1)
        {
            front++;
        }
        rear++;
        queue[rear] = value;
    }
}
// dequeue
void dequeue()
{
    if (rear != -1 && front != -1 && front <= rear)
    {
        front++;
    }
    else
    {
        cout << "Queue is empty\n";
    }
}
int peek()
{
    if (rear != -1 && front != -1 && front <= rear)
    {
        return queue[front];
    }
    else
    {
        cout << "queue is empty" << endl;
        return -1;
    }
}
void display()
{
    if (rear != -1 && front != -1 && front <= rear)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << endl;
        }
    }
    else
    {
        cout << "Queue is empty\n";
    }
}