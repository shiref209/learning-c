#include <iostream>
using namespace std;

int main()
{
    cout << "Calculate Kilo Bytes\n";
    cout << "+++++++++++++++++\n";
    cout << "Enter The Number OF KiloBytes\n";
    int kilobytes;
    cin >> kilobytes;
    int number_of_bytes = kilobytes * 1024;
    int number_of_bits = number_of_bytes * 8;
    cout << "Number of Kilobytes is " << kilobytes << "\n";
    cout << "Number of Bytes is " << number_of_bytes << "\n";
    cout << "Number of Bits is " << number_of_bits;
}