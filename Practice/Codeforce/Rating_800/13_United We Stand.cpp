#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define fraction() cout << fixed << setprecision(10)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), b, c;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int v_first = v[0];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v_first)
            cnt++;
    }

    if (cnt == v.size())
    {
        cout << -1 << nl;
    }
    else
    {
        b.push_back(v_first);
        for (int i = 1; i < n; i++)
        {
            if (v_first == v[i])
                b.push_back(v[i]);
            else
                c.push_back(v[i]);
        }

        cout << b.size() << ' ' << c.size() << nl;
        for (auto x : b)
            cout << x << ' ';
        cout << nl;
        for (auto x : c)
            cout << x << ' ';
        cout << nl;
    }
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