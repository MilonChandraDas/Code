#include <bits/stdc++.h>
using namespace std;

constexpr char nl = '\n';

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < 3; i++)
    {
        sum1 += a[i][i];
        if (3 - i - 1 != i)
        {
            sum2 += a[3 - i - 1][i];
        }
    }
    cout << sum1 + sum2;
    return 0;
}