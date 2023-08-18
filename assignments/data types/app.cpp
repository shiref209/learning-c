#include <iostream>
#include <limits>
using namespace std;

int main()
{

    // Example 1
    // false // bool => Boolean

    // 'a' // string
    // '9' // string
    // 9 // int
    // true // bool
    // 100 // int
    // -10 // int
    // 0 // int
    // false // bool
    // 10.9 // double

    // // 2. print number of bits and byts
    // double salary = 5000.98;
    // cout << sizeof(salary) << " bytes\n";
    // cout << sizeof(salary) * 8 << " bits \n";

    // // 3. print max and min number possible
    // int num;
    // short short_num;
    // std::cout << "Maximum value of int: " << std::numeric_limits<int>::max() << std::endl;
    // std::cout << "Minimum value of int: " << std::numeric_limits<int>::min() << std::endl;
    // std::cout << "Maximum Short Integer Number Is: " << std::numeric_limits<short>::max() << std::endl;
    // std::cout << "Minimum Short Integer Number Is: " << std::numeric_limits<short>::min() << std::endl;

    // // 4. Edit Line To Make 8 Become 4
    // cout << sizeof(float(10.5 + 5 + 20.5 + 10)) << "\n";

    // // 5 print ascii value
    // char a = '~';
    // char b = '&';
    // char c = '%';
    // char d = 'A';
    // cout << "ASCII Value of ~ Is :" << int(a) << "\n";
    // cout << "ASCII Value of & Is :" << int(b) << "\n";
    // cout << "ASCII Value of % Is :" << int(c) << "\n";
    // cout << "ASCII Value of A Is :" << int(d) << "\n";

    // // 6 convert ascii value to  char
    // int a = 69;
    // int b = 108;
    // int c = 122;
    // int d = 101;
    // int e = 114;
    // int f = 111;
    // cout << "Character Of This ASCII Value 69 Is " << char(a) << "\n";
    // cout << "Character Of This ASCII Value 108 Is " << char(b) << "\n";
    // cout << "Character Of This ASCII Value 122 Is " << char(c) << "\n";
    // cout << "Character Of This ASCII Value 101 Is " << char(d) << "\n";
    // cout << "Character Of This ASCII Value 114 Is " << char(e) << "\n";
    // cout << "Character Of This ASCII Value 111 Is " << char(f) << "\n";

    // // 7 // Output Needed "EWS"

    // int a = 1;
    // int b = 13;
    // int c = 17;
    // int d = 70;
    // cout << char(d - a) << char(c + d) << char(b + d) << "\n";

    // // 8 Edit Anything Except Values
    // short a = 100;
    // int b = 15001500;
    // double c = 100.54565746;

    // // Do Not Edit
    // cout << sizeof(a) << " Bytes\n"; // 2 Bytes
    // cout << sizeof(b) << " Bytes\n"; // 8 Bytes
    // cout << sizeof(c) << " Bytes\n"; // 16 Bytes

    // // 9 Edit Anything Except Values
    // unsigned int a = 100;
    // int b = -100;
    // int c = 100;
    // long d = 500.55;

    // // Do Not Edit
    // cout << a << "\n"; // 100
    // cout << b << "\n"; // -100
    // cout << c << "\n"; // 100

    // // 10 Add Type Alias Here

    // // Do Not Edit
    // // using lli = long long int;
    // typedef long long int lli;
    // lli num = 150050005; // This Is Long Long Int
    // cout << num << "\n"; // 150050005

    // // 11. Do Not Edit Here
    // short int a = 100;
    // float b = 98.5f;
    // double c = 1.7;

    // // Edit This Line And Use Type Casting To Get The Output
    // cout << a + int(b + c) << "\n"; // 200

    // // 13.Do Not Edit Here
    // short a = 1000;
    // int b = 10000;
    // long double c = 5.560000505012;

    // // Change ??? To Something Else To Get The Output
    // cout << sizeof(c) - sizeof(b) << "\n";                       // 12
    // cout << sizeof(c) + sizeof(int) << "\n";                     // 20
    // cout << sizeof(c) * sizeof(a) << "\n";                       // 32
    // cout << (sizeof(b) + 1) * a << "\n";                         // 5000
    // cout << char((sizeof(c) + sizeof(int)) * sizeof(b)) << "\n"; // P
}