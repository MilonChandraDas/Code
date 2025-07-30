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

    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int c[n + m];
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        c[k] = a[i];
        k++;
    }
    for (int i = 0; i < m; i++)
    {
        c[k] = b[i];
        k++;
    }

    for (auto i : c)
        cout << i << ' ';
    return 0;
}
// 1.10