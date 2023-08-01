// simple calculator takes 2 inputs and operator
#include <iostream>
using namespace std;

int main()
{
    int first_num, second_num, result;
    char op;
    cout << "Please enter first number\n";
    cin >> first_num;
    cout << "Please enter second number\n";
    cin >> second_num;
    cout << "Please enter operation\n";
    cin >> op;
    (op == '+' ? result = first_num + second_num : op == '-' ? result = first_num - second_num
                                                             : op = '*' ? result = first_num *second_num : result = first_num / second_num);

    cout << "Result is " << result;
    return 0;
}