// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
#include <iostream>
using namespace std;
int N;

int minStart, maxStart;
int rowSize;
void firstTriangle();
void reverseTriangle();

int main()
{
    cin >> N;
    // Calculate single row size depending on number of rows
    rowSize = N + (N - 1);
    // First Triangle
    firstTriangle();
    // SECOND REVERSED TRIANGLE
    reverseTriangle();

    return 0;
}
void firstTriangle()
{
    // Start of stars at half of smaller loop
    minStart = maxStart = (rowSize - 1) / 2;
    // Bigger loop for row whole {FIRST TRIANGLE}
    for (int i = 0; i < N; i++)
    {

        // Smaller loop for row itself and stars
        for (int x = 0; x < rowSize; x++)
        {
            if (x >= minStart && x <= maxStart)
            {
                cout << '*';
            }
            else if (x > maxStart)
            {
                break;
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
}
void reverseTriangle()
{
    minStart = 0;
    maxStart = rowSize;

    for (int i = 0; i < N; i++)
    {

        // Smaller loop for row itself and stars
        for (int x = 0; x < rowSize; x++)
        {
            if (x >= minStart && x < maxStart)
            {
                cout << '*';
            }
            else if (x > maxStart)
            {
                break;
            }
            else
            {
                cout << " ";
            }
        }
        minStart++;
        maxStart--;
        cout << "\n";
    }
}