#include <bits/stdc++.h>
using namespace std;

constexpr char nl = '\n';

void pass_by_value(int a) {
    a = 50;
}

void pass_by_pointer(int *a) {
    *a = 50;
}

void pass_by_reference(int &a) {
    a = 60;
}

int main() {
    int val = 10;
    pass_by_value (val);
    cout << val << nl;

    pass_by_pointer(&val);
    cout << val << nl;

    pass_by_reference(val);
    cout << val << nl;
    return 0;
}