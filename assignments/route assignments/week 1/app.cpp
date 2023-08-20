#include <iostream>
using namespace std;

int main()
{

    // // 1. Write a program that takes an integer from user then print it
    // int num;
    // cout << "Please enter a number\n";
    // cin >> num;
    // cout << "Your number is " << num;

    // // 2.write a program that ask the user to insert 3 numbers then print the sum Input
    // int num1, num2, num3, result;
    // cout << "Please enter 3 numbers to sum\n";
    // cin >> num1;
    // cin >> num2;
    // cin >> num3;
    // cout << "Result is " << num1 + num2 + num3;

    // // 3.write a program that ask the user to insert 3 integers then print the average as decimal number

    // double num1, num2, num3;
    // cout << "Please enter 3 numbers to average\n";
    // cin >> num1;
    // cin >> num2;
    // cin >> num3;
    // cout << "Average is " << (num1 + num2 + num3) / 3;

    // // 4.Write a program to compute the perimeter and area of a rectangle. Your code
    // // should ask the user to insert the width and the height

    // int height, width;
    // cout << "Please enter the height\n";
    // cin >> height;
    // cout << "Please enter the width\n";
    // cin >> width;
    // cout << "Perimete is " << (height + width) * 2 << " and are is " << height * width;

    // // 5.Write a program to calculate the sum of the digits of a 3-digit number.
    // cout << "Please enter a 3 digit number\n";
    // int num;
    // cin >> num;
    // int num2_remainder = num % 100;

    // int num3 = num2_remainder % 10;
    // int num2 = ((num - num3) % 100) / 10;
    // cout << num3 << endl;
    // int num1 = (num - num2_remainder) / 100;
    // int sum = num1 + num2 + num3;
    // cout << "Sum is " << sum << "\n";
    // return 0;

    // // 6. convert given seconds to hours and minutes and seconds
    // cout << "Please Enter time given in seconds\n";
    // int input;
    // cin >> input;
    // int remainder;
    // int seconds = input % 60;
    // remainder = input - seconds;
    // int minutes = (remainder / 60) % 60;
    // remainder = input - (minutes * 60);
    // int hours = (remainder / 3600) % 60;
    // cout << "Result is " << hours << " H:" << minutes << "M:" << seconds << "S";

    // // 7. write program to print negative or positive
    // cout << "Please Enter Your Number\n";
    // int input;
    // cin >> input;
    // if (input > 0)
    // {
    //     cout << "number is positive\n";
    // }
    // else
    // {
    //     cout << "Number is negative\n";
    // }

    // // 8.Write a program to read any digit from 1 to 5, display it as a word
    // cout << "Please Enter Your Number\n";
    // int input;
    // cin >> input;
    // switch (input)
    // {
    // case 1:
    //     cout << "one";
    //     break;
    // case 2:
    //     cout << "two";
    //     break;
    // case 3:
    //     cout << "three";
    //     break;
    // case 4:
    //     cout << "four";
    //     break;
    // case 5:
    //     cout << "five";
    //     break;
    // default:
    //     cout << "only numbers from 1 to 5, try again\n";
    //     cin >> input;
    //     break;
    // }

    // // 9.Write a program that reads 5 numbers and sum of all odd values between them
    // cout << "Please enter 5 numbers\n";
    // int inp1;
    // int inp2;
    // int inp3;
    // int inp4;
    // int inp5;
    // cin >> inp1 >> inp2 >> inp3 >> inp4 >> inp5;
    // int sum = 0;
    // if (inp1 % 2 != 0)
    // {
    //     sum += inp1;
    // }
    // if (inp2 % 2 != 0)
    // {
    //     sum += inp2;
    // }
    // if (inp3 % 2 != 0)
    // {
    //     sum += inp3;
    // }
    // if (inp4 % 2 != 0)
    // {
    //     sum += inp4;
    // }
    // if (inp5 % 2 != 0)
    // {
    //     sum += inp5;
    // }
    // cout << "Your result is " << sum;
    // // more optimized option is by array and loop

    // // 10.10.Write a program that reads a year then check if a year is a leap year or not: a leap year is divisible by 400 or 4 only

    // cout << "Please enter the year to check\n";
    // int input;
    // cin >> input;
    // if (input % 400 == 0 && input % 4 == 0)
    // {
    //     cout << "Yaaaaay, it's a leap year\n";
    // }
    // else
    // {
    //     cout << "Not leap year\n";
    // }

    // // 11. Take a birth year and check if above 18 or not
    // cout << "Enter your birth year\n";
    // int input;
    // cin >> input;
    // int age = 2023 - input;
    // if (age > 18)
    // {
    //     cout << "You are +18\n";
    // }
    // else
    // {
    //     cout << " kooty kooty\n";
    // }

    // 12-13 done with elzero

        // // 14. ternary operator check positive or negative
    // cout << " Please enter the number to check\n";
    // int input;
    // cin >> input;
    // (input % 2 == 0 ? cout << "ODD" : cout << "EVEN");
}