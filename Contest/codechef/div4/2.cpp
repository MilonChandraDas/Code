#include <bits/stdc++.h>
using namespace std;

constexpr char nl = '\n';

int main()
{
    int a, b;
    cin >> a >> b;

    if (b >= (a * 3))
        cout << "Rain" << nl;
    else
        cout << "Dry" << nl;
    return 0;
}