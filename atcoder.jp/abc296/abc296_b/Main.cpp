#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    string s[8];
    for (i64 i = 7; i >= 0; i--) {
        cin >> s[i];
    }
    for (i64 i = 0; i < 8; i++) {
        for (i64 j = 0; j < 8; j++) {
            if (s[i][j] == '*') {
                cout << (char)('a' + j) << i + 1 << endl;
                return 0;
            }
        }
    }
    return 0;
}
