// find the greatest number

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, max_num;
    cout << "Please enter your first number" << endl;
    cin >> num1;
    cout << "Please enter your second number" << endl;
    cin >> num2;
    cout << "Please enter your third number" << endl;
    cin >> num3;
    cout << "Your numbers are\t" << num1 << "\t" << num2 << "\t" << num3 << endl;

    // (num1 > num2 ? (num1 > num3 ? max_num = num1 : (num3 > num2 ? max_num = num3 : max_num = num2)) : 0);
    (num1 > num2 &&num1 > num3 ? max_num = num1 : (num2 > num3 ? max_num = num2 : max_num = num3));
    cout << "Biggest Number is " << max_num;

    return 0;
}