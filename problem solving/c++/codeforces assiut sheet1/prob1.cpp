// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X

#include <iostream>
using namespace std;
// wrong my answer
int main()
{
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (l1 > r2 || l2 > r1)
    {
        // No intersection
        cout << -1 << endl;
    }
    else if (l1 < l2 && r1 < r2)
    {
        cout << l2 << "  " << r1;
    }
    else if (l1 < l2 && r1 > r2)
    {
        cout << l2 << "  " << r2;
    }
    else if (l1 > l2 && r1 < r2)
    {
        cout << l1 << "  " << r1;
    }
    else
    {
        cout << l1 << "  " << r2;
    }

    return 0;
}

// correct

// int main()
// {
//     long long l1, r1, l2, r2;
//     cin >> l1 >> r1 >> l2 >> r2;

//     if (l1 > r2 || l2 > r1)
//     {
//         cout << -1 << endl;
//     }
//     else
//     {
//         long long intersection_start, intersection_end;

//         if (l1 > l2)
//         {
//             intersection_start = l1;
//         }
//         else
//         {
//             intersection_start = l2;
//         }

//         if (r1 < r2)
//         {
//             intersection_end = r1;
//         }
//         else
//         {
//             intersection_end = r2;
//         }

//         cout << intersection_start << " " << intersection_end << endl;
//     }

//     return 0;
// }