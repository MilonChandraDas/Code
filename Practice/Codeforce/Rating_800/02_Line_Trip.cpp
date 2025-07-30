#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define fraction() cout << fixed << setprecision(10)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> v;
    v.push_back(0);
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    v.push_back(x);

    int max_val = INT_MIN, size = v.size();

    for (int i = 1; i < size; i++) {
        max_val = max(max_val, v[i] - v[i-1]);
        if (v[i] == v[size-1]) {
            max_val = max(max_val, 2*(v[i] - v[i-1]));
        }
    }

    cout << max_val << nl;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}