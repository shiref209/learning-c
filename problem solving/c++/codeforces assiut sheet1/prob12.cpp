// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z

#include <iostream>
using namespace std;

int main()
{
    int k, s;
    cin >> k >> s;
    int outputs = 0;

    for (int i = 0; i < 1000; i++)
    {
        int index = i;
        int sum = 0;
        while (index > 0)
        {
            int modulus = index % 10;
            if (modulus <= k && sum <= s)
            {
                sum += modulus;
                index /= 10;
            }
            else
            {
                sum = -1;
                break;
            }
        }
        if (sum == s)
        {
            outputs++;
            cout << i << " ";
        }
    }
    cout << outputs << endl;

    return 0;
}

// good answer from ChatGpt
// #include <iostream>
// using namespace std;

// int main()
// {
//     int k, s;
//     cin >> k >> s;
//     int outputs = 0;

//     for (int x = 0; x <= k; x++)
//     {
//         for (int y = 0; y <= k; y++)
//         {
//             int z = s - x - y;
//             if (z >= 0 && z <= k)
//             {
//                 outputs++;
//             }
//         }
//     }

//     cout << outputs << endl;

//     return 0;
// }