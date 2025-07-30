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

    int idx;
    cin >> idx;

    for (int i = idx + 1; i < n; i++)
    {
        a[i-1] = a[i];
    }
    for (int i = 0; i < n - 1; i++)
        cout << a[i] << ' ';
    return 0;
}