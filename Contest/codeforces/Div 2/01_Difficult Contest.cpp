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

bool SORT(const pair<char, int> &a, const pair<char, int> &b)
{
    return a.second > b.second;
}

void solve()
{
    string s;
    cin >> s;

    map<char, int> m;
    for (auto x : s)
    {
        m[x]++;
    }

    vector<pair<char, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), SORT);

    string res = "";

    while (res.size() != s.size())
    {
        if (v[0].first > 0)
            res += v[0].first, v[0].second--;
        if (v[1].first > 0)
            res += v[1].first, v[1].second--;

        sort(v.begin(), v.end(), SORT);
    }

    cout << res << nl;
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