#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;
    int start = input - 1;

    // Bigger loop for rows
    for (int i = 0; i < input; i++)
    {
        // smaller loop for rows stars
        for (int x = 0; x < input; x++)
        {
            if (x == start)
            {
                cout << "*****";
            }
            else
            {
                cout << " ";
            }
        }
        start--;
        cout << "\n";
    }

    return 0;
}
