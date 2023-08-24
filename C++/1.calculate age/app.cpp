// Calculate your age

#include <iostream>
using namespace std;

int main()
{
    cout << "=====================\n";
    cout << "Calculate Your Age\n";
    cout << "=====================\n";
    int age;
    cout << "What is your age in years??\n";
    cin >> age;
    int age_in_days = age * 365;
    int age_in_hours = age_in_days * 24;
    int age_in_seconds = age_in_hours * 60;
    cout << "Your Age is " << age_in_days << " Days\n";
    cout << "Your age is " << age_in_hours << " Hours and " << age_in_seconds << " in Seconds";
}