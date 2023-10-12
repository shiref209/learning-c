// check if number is palindroome in recursive
#include <iostream>
#include <vector>

using namespace std;
vector<int> nums;
// int size;
void getNums(int num);
void loopSolution(int size);
void recursiveSolution(int size, int i);
int main()
{

    int input;
    cout << "Enter number\n";
    cin >> input;
    getNums(input);
    int arrSize = nums.size();
    // loopSolution(arrSize);

    // Recursion
    recursiveSolution(arrSize - 1, 0);
    return 0;
}
void getNums(int num)
{
    if (num == 0)
    {
        return;
    }
    else
    {
        while (num > 0)
        {
            int size = 0;
            nums.push_back(num % 10);
            num /= 10;
            size++;
        }
    }
}
void loopSolution(int size)
{
    for (int i = 0; size; i++)
    {
        if (nums[i] == nums[size - 1])
        {
            if (i == size - 1 || (size % 2 == 0 && i == size))
            {
                cout << "Horaaaay\n";
                return;
            }

            size--;
        }

        else
        {
            cout << "Not palinmore\n";
            break;
        }
    }
}
void recursiveSolution(int size, int i)
{

    // stop recurrsive condition
    if (nums[i] == nums[size])
    {
        if (i == size || (i == size - 1 && size % 2 == 0))
        {
            cout << "Horaaaay palinmore\n";
            return;
        }
        i++;
        recursiveSolution(size - 1, i);
    }

    else
    {
        cout << "Not Palinmore \n";
    }
}