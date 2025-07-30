#include <bits/stdc++.h>
using namespace std;

constexpr char nl = '\n';

int main()
{
    int n;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int pri = 0, sec = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                pri += a[i][j];
            if (i + j == n - 1)
                sec += a[i][j];
        }
    }

    cout << abs(pri - sec) << nl;

    return 0;
}