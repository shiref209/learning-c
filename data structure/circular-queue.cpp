#include <iostream>
using namespace std;

#define size 5
int queue[size];
int front = -1, rear = -1;

void enqueue(int value);
int dequeue();
int peek();
void display();

int main()
{
    enqueue(5);
    enqueue(15);
    enqueue(25);
    cout << front << endl;
    cout << "This is rear: " << rear << endl;
    enqueue(35);
    enqueue(45);
    dequeue();
    dequeue();
    dequeue();
    enqueue(55);
    enqueue(65);
    peek();
    display();

    return 0;
}

void enqueue(int value)
{
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
    {
        cout << "Queue is full\n";
        return;
    }
    else if (rear == size - 1)
    {
        rear = 0;
    }
    if (front == -1)
    {
        front++;
    }
    rear++;

    queue[rear] = value;
}
int dequeue()
{
    int element;
    if (front == -1 && rear == -1)

    {
        cout << "queue is empty\n";
        return -1;
    }
    else if (front == -1 && rear == -1)
    {
        element = queue[front];
        front = -1;
        rear = -1;

        return element;
    }
    return queue[front++];
}
void display()
{
    if (front == rear == -1)
    {
        cout << "queue is empty\n";
    }
    else if (front > rear)
    {
        for (int i = front; i < size; i++)
        {
            cout << queue[i] << endl;
        };
        for (int x = 0; x <= rear; x++)
        {
            cout << queue[x] << endl;
        };
    }
    else
    {
        for (int y = front; y <= rear; y++)
        {
            cout << queue[y] << endl;
        }
    }
}
int peek()
{
    if (front == rear == -1)
    {
        cout << "queue is empty\n";
    }
    else
    {
        cout << "peek is: " << queue[front] << endl;
        return queue[front];
    }
}