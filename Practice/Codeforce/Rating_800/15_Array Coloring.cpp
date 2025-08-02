#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

void solve()
{
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a % 2)
            ans += a;
    }

    if (ans % 2)
        no;
    else
        yes;
}

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}