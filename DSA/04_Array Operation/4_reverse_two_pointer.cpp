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

    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(a[i], a[j]);
        i++, j--;
    }

    for (auto i : a)
        cout << i << ' ';
    return 0;
}