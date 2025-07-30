#include <bits/stdc++.h>
using namespace std;

constexpr char nl = '\n';

void reverse(int i, int j, int a[])
{
    while (i < j)
    {
        swap(a[i], a[j]);
        i++, j--;
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;
    k = k % n;

    reverse(0, k - 1, a);
    reverse(k, n - 1, a);
    reverse(0, n - 1, a);

    for (auto i : a)
        cout << i << " ";

    return 0;
}