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

    bool ans = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            ans = false;
            break;
        }
    }

    cout << ans << nl;
    return 0;
}