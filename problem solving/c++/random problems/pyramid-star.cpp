#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;
    // Calculate single row size depending on number of rows
    int rowSize = input + (input - 1);

    int minStart, maxStart;
    // Start of stars at half of smaller loop
    minStart = maxStart = (rowSize - 1) / 2;
    // Bigger loop for row whole
    for (int i = 0; i < input; i++)
    {

        // Smaller loop for row itself and stars
        for (int x = 0; x < rowSize; x++)
        {
            if (x >= minStart && x <= maxStart)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        minStart--;
        maxStart++;
        cout << "\n";
    }
    return 0;
}