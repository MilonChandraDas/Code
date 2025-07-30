#include <bits/stdc++.h>
using namespace std;

constexpr char nl = '\n';

int main() {
    int var = 10;
    int *ptr = &var;
    
    cout << var << " " << *ptr << nl; 
    cout << &var << " " << ptr << nl;
    
    *ptr = 50;
    cout << var << " " << *ptr << nl;

    return 0;
}