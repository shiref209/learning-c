#include <iostream>
using namespace std;

void output(int x, int j)
{
    for (int i = 0; i <= x; i++)
    {
        cout << "8";
    }
    for (int i = 0; i < j; i++)
    {
        cout << "*";
    }
    for (int i = 0; i <= x; i++)
    {
        cout << "8";
    }
    // cout << endl;
}
int main()
{

    cout << "enter number" << endl;
    int input;
    cin >> input;
    int row_size = (2 * input) - 2;
    int x = input;
    for (int i = 0; i < x; i++)
    {
        int range1 = 1;

        for (int x = 0; x <= row_size; x++)
        {
            output(input - 1, range1);
            input--;
            range1++;
            // if (x >= input - range1 && x <= input + range1)
            // {
            //     cout << "*";
            //     range1++;
            // }
            // else
            // {
            //     cout << "&";
            // }
            if (x == row_size)
            {
                cout << "\n";
            }
        }
    }

    return 0;
}