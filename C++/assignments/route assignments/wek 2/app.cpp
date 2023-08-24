#include <iostream>
using namespace std;

int main()
{
    // // 1.print from 10 to 0
    // for (int i = 10; i > -1; i--)
    // {
    //     cout << i << "\n";
    // }

    // // 2.Write a program to read 10 numbers from the user then print the average.
    // int size = 10;
    // int input[size];
    // cout << "Please enter 10 numbers to count the average\n";

    // for (int i = 0; i < size; i++)
    // {
    //     cin >> input[i];
    // }
    // float avrg = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     avrg += input[i];
    // }
    // cout << avrg / 10;

    // // 3.Write a program i to display the multiplication table of a given integer
    // cout << "Please enter your number\n";
    // int input;
    // cin >> input;
    // for (int i = 0; i < 13; i++)
    // {
    //     cout << input << "*" << i << "=" << input * i << "\n";
    // }

    // // 4.Write a program that allows the user to insert two integers N and M and print the summation of all numbers between N and M.
    // cout << "Please enter 2 numbers\n";
    // int input1;
    // int input2;
    // cin >> input1 >> input2;
    // int sum = input1 + input2;
    // for (int i = 0; i < input2; i++)
    // {
    //     if (i < input2 && i > input1)
    //     {
    //         sum += i;
    //     }
    // }
    // cout << sum;

    // // 5.Write a program that allows the user to insert infinite integers until insert negative number then print summation of all integers
    // cout << "Enter Your numbers\n";
    // int input;
    // int sum;
    // for (int i = 0;; i++)
    // {
    //     cin >> input;
    //     sum += input;
    //     if (input < 0)
    //     {
    //         cout << sum;
    //         break;
    //     }
    // }

    // Write a program that allows the user to insert infinite integers until insert negative number then print the max integer.
    // cout << "Enter Your numbers\n";
    // int input;
    // int max = 0;
    // for (int i = 0;; i++)
    // {
    //     cin >> input;
    //     if (input > max)
    //     {
    //         max = input;
    //     }
    //     if (input < 0)
    //     {
    //         cout << max;
    //         break;
    //     }
    // }

    // //7. Enter Number and Count the number of steps required to make the Number equal to Zero.
    // cout << "Enter your number\n";
    // int input;
    // cin >> input;
    // int steps = 0;
    // for (int i = 0;; i++)
    // {
    //     if (input % 2 == 0)
    //     {
    //         steps++;
    //         input /= 2;
    //     }
    //     else
    //     {
    //         input--;
    //         steps++;
    //     }
    //     if (input == 0)
    //     {
    //         cout << steps;
    //         break;
    //     }
    // }

    // // 8.Write a program to find the power of a number.
    // cout << "Please enter the number\n";
    // int num, base, result;
    // cin >> num;
    // cout << "Please enter the number base\n";
    // cin >> base;

    // for (int i = 0; i <= base; i++)
    // {
    //     result = result + (num * result);
    // }
    // cout << result;

    // // 9.Write a program to take 10 numbers from the user and count the odd numbers
    // cout << "Please enter your number\n";
    // int num;
    // int count = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     cin >> num;
    //     if (num % 2 != 0)
    //     {
    //         count++;
    //     }
    // }
    // cout << count;

    // // 10.Write a program to take 2 integers from the user and find the Greatest Common Divisor of two numbers.
    // cout << "Please enter 2 numbers \n";
    // int inp1, inp2;
    // cin >> inp1 >> inp2;
    // int smaller_inp = inp1 > inp2 ? inp2 : inp1;
    // cout << smaller_inp << endl;
    // int divisor;
    // for (int i = 1; i <= smaller_inp; i++)
    // {
    //     if (inp1 % i == 0 && inp2 % i == 0)
    //     {
    //         divisor = i;
    //     }
    // }
    // cout << "Common divisor is :" << divisor;

    // test
    int arr[10] = {1, 2, 3, 5, 1, 5, 20, 2, 12, 10};

    for (int j = 0; j < 10; j++)
    {
        int uniq;
        for (int i = 0; i < 10; i++)
        {
            if (arr[j] == arr[i] && i != j)
            {
                uniq = 999;
                break;
            }
            else
            {
                uniq = arr[j];
            }
        }
        if (uniq != 999)
        {
            cout << uniq << endl;
        }
    }

    return 0;
}