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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i ==j)
                cout << a[i][j] << ' ';
        }
    }

    return 0;
}