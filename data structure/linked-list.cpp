#include <iostream>
using namespace std;

struct node
{
    int value;
    node *next;
};
node *head = NULL;
void insertNode(int data);
void displayNode();
void deleteNode(int data);
void insertBegining(int data);
void deleteBeg();
void deleteEnd();

int main()
{
    // insertNode(5);
    // insertNode(10);
    // insertNode(15);

    // insertNode(7);
    // deleteNode(5);
    // displayNode();
    // insertBegining(8);
    // insertBegining(6);

    deleteEnd();
    displayNode();

    return 0;
}

void insertNode(int data)
{
    node *new_node, *last;
    new_node = new node;
    new_node->value = data;
    new_node->next = NULL; // Initialize the next pointer to NULL

    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        last = head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = new_node;
    }
}
// Display linked list
void displayNode()
{
    node *current_node = head;
    if (current_node == NULL)
    {
        cout << "The linked list is empty" << endl;
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
// delete linked list item
void deleteNode(int data)
{
    // more optimized solution
    node *checking_node, *previous_node;
    checking_node = head;
    previous_node = head;
    if (checking_node->value == data)
    {
        head = checking_node->next;
        free(checking_node);
        return;
    }
    while (checking_node->value != data)
    {
        checking_node = checking_node->next;
        previous_node = checking_node;
    }
    previous_node->next = checking_node->next;
    free(checking_node);

    // My solution but didnt fix if we delete first node

    // node *target_node, *checking_node, *previous_node;
    // checking_node = head;
    // previous_node = head;
    // while (checking_node != NULL)
    // {
    //     if (checking_node->value == data)
    //     {
    //         target_node = checking_node;
    //         target_node->next = checking_node->next;
    //         previous_node->next = checking_node->next;
    //         free(checking_node);
    //         break;
    //     }
    //     else
    //     {
    //         previous_node = checking_node;
    //     }
    //     checking_node = checking_node->next;
    // }
}

//  insert at beginning
void insertBegining(int data)
{
    node *new_node = new node;
    new_node->value = data;

    new_node->next = head;

    head = new_node;
}

// delete beginning
void deleteBeg()
{
    node *target = head;
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
        ;
        return;
    }
    head = target->next;

    delete (target);
}

// delete last element in list
void deleteEnd()
{
    node *target, *previous;
    target = head;
    previous = head;
    if (head == NULL)
    {
        cout << "Linked list is already Empty" << endl;
        return;
    }
    if (target->next == NULL)
    {
        head = target->next;
        cout << "List is now Empty" << endl;
        return;
    }
    while (target->next != NULL)
    {
        previous = target;
        target = target->next;
    }
    previous->next = NULL;

    // another solution instead of using prev
    // while(target->next->next !=NULL){
    //     target=target->next;
    // }

    delete (target);
}