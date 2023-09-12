#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin >> rows;
    for (int j = rows; j >= 1; j--)
    {
        for (int i = 1; i <= rows; i++)
        {
            if (i >= j)
                cout << '*';
            else
                cout << " ";
        }
        for (int i = rows; i >= j; i--)
        {
            if (j == rows || i == rows)
                continue;
            else
                cout << '*';
        }
        cout << '\n';
    }
    for (int j = 1; j <= rows; j++)
    {
        for (int i = 1; i <= rows; i++)
        {
            if (i >= j)
                cout << '*';
            else
                cout << " ";
        }
        for (int i = rows; i >= j; i--)
        {
            if (i == rows)
                continue;
            else
                cout << '*';
        }
        cout << '\n';
    }
    return 0;
}