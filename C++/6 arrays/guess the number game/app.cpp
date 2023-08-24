#include <iostream>
using namespace std;

int main()
{
    const int rows = 3;
    const int columns = 5;
    int matrix[rows][columns] = {
        {1, 5, 10, 16, 32},
        {2, 4, 8, 16, 32},
        {1, 1, 2, 3, 5}};

    int answers[3];
    int points = 0;
    cout << "Welcome to sequence game. Guess the number\n";
    cout << "Game 1\n";
    cout << "1|5|10|16|??\n";
    cin >> answers[0];

    cout << "Game 2\n";
    cout << "2|4|8|16|??\n";
    cin >> answers[1];

    cout << "Game 3\n";
    cout << "1|1|2|3|??\n";
    cin >> answers[2];

    if (answers[0] == matrix[0][4])
    {
        points++;
    }
    if (answers[1] == matrix[1][4])
    {
        points++;
    }
    if (answers[2] == matrix[2][4])
    {
        points++;
    }
    cout << "Your Points are: " << points;
    return 0;
}