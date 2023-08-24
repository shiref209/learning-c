// check user's rank on percentage scale
// 85 and above is excellent
// 75 to 84 is very good
// 60 to 74 is good
// 50 to 59 is passed
// below 50 is failure

#include <iostream>
using namespace std;

int main()
{
    int user;
    cout << "Please enter the percentage\n";
    cin >> user;
    (user > 85 ? cout << "Your rank is excellent" : user > 75 ? cout << "Your rank is very good"
                                                : user > 60   ? cout << "Your rank is good"
                                                : user > 50   ? cout << "You passed"
                                                              : cout << "Failure bad boy");
    return 0;
}