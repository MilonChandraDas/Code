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

    int k;
    cin >> k;
    k = k % n;
    int b[n];
    
    for (int i = 0; i < n; i++)
    {
        int idx = (i + k) % n;
        b[idx] = a[i];
    }

    for (auto i : b)
        cout << i << ' ';
    return 0;
}