// escape sequence chars
/* \n
\\

*/

#include <iostream>
using namespace std;
int main()
{
    cout << "First Line\n";
    cout << "Second Line 2\\\n";
    cout << "third line \'3\'\n";
    cout << "fourth line \t 4\n";
    cout << "fifth lines\bd\n";
    cout << "sixth line will alert \a\n";
    cout << "seventh line \r Iam now eighth\n";
}