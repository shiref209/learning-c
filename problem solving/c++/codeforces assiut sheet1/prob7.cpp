// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;
    long long bodies = 0;
    long long minM = min({n, m, k});
    bodies += minM;
    n -= minM;
    m -= minM;
    k -= minM;
    long long minN = min(n / 2, k);
    bodies += minN;
    cout << bodies << endl;

    return 0;
}

//   {
//         if (n % 2 == 0 && m % 2 == 0 && k % 2 == 0)
//         {
//             bodies += n / 2;
//             n /= 2;
//             k /= 2;
//             m /= 2;
//             continue;
//         }
//         else if (n > 0 && m > 0 && k > 0)
//         {
//             bodies += 1;
//             n -= 1;
//             k -= 1;
//             m -= 1;
//             continue;
//         }
//         // else if (n >= 2 && m >= 1 && k >= 1)
//         // {
//         //     bodies++;
//         //     n -= 2;
//         //     m -= 1;
//         //     k -= 1;
//         //     continue;
//         // }
//         else if (n >= 2 && k >= 1)
//         {
//             bodies++;
//             n -= 2;
//             k -= 1;
//         }
//     }