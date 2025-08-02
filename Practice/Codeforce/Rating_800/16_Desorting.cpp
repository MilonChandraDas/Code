#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int MIN = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            MIN = min(MIN, a[i] - a[i - 1]);
        }

        if (MIN < 0)
            cout << 0 << '\n';
        else
            cout << (MIN / 2) + 1 << '\n';
    }
}