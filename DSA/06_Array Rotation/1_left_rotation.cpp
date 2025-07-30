#include <bits/stdc++.h>
using namespace std;

constexpr char nl = '\n';

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int tmp = a[0];

    for (int i = 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    a[n - 1] = tmp;

    for (auto i : a)
        cout << i << ' ';
    return 0;
}