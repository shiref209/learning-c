// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
#include <iostream>
using namespace std;

int main()
{
    double price, discount;
    cin >> discount >> price;
    double discountPercentage = (100 - discount) / 100;
    double priceBefore = price / discountPercentage;
    cout << priceBefore << endl;
    return 0;
}