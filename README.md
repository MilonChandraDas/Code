# Competitive Programming Setup

A streamlined workspace for competitive programming with optimized VS Code configuration.

## 🚀 Quick Setup

### 1. Install Prerequisites

- **GCC Compiler** (with C++17 support)
- **Visual Studio Code**
- **Code Runner Extension**

### 2. VS Code Configuration

Create `.vscode/settings.json` with these optimized settings:

```json
{
  "code-runner.executorMap": {
    "cpp": "g++ -std=c++17 -O2 $fullFileName -o main && if ($?) { Get-Content input.txt | .\\main > output.txt; del main.exe }",
    "c": "gcc $fullFileName -o main && if ($?) { Get-Content input.txt | .\\main > output.txt; del main.exe }"
  },
  "code-runner.clearPreviousOutput": true,
  "code-runner.runInTerminal": true,
  "files.associations": {
    "iostream": "cpp",
    "chrono": "cpp",
    "span": "cpp"
  }
}
```

### 3. Essential Files

- `input.txt` - Place test cases here
- `output.txt` - Program output appears here automatically

## ⚡ Usage

1. Write code in any `.cpp` file
2. Add test input to `input.txt`
3. Press **Ctrl+R** to compile and run
4. Check results in `output.txt`

## 🎯 Key Features

- **Auto-compilation** with C++17 and O2 optimization
- **Input redirection** from `input.txt`
- **Output capture** to `output.txt`
- **Clean terminal** output
- **Automatic cleanup** of executable files

## 📋 Competitive Programming Template

```cpp
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

void solve() {

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
```
