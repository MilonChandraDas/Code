#include <bits/stdc++.h>
using namespace std;

constexpr char nl = '\n';

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.shrink_to_fit();
    cout << v.size() << nl;
    cout << v.capacity() << nl;
    return 0;
}