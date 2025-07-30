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


int main() {
    fastio();
    int n;
    cin >> n;
    int mini = INT_MAX;

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        a = abs(a);
        mini = min(mini, a);
    }

    cout << mini << nl;
    return 0;
}