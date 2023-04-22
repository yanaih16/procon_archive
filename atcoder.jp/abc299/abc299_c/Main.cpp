#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n;
    cin >> n;
    string s;
    cin >> s;
    bool maru = false, kusi = false;
    i64 ren = 0, max = -1;
    for (i64 i = 0; i < n; i++) {
        if (s[i] == 'o') {
            maru = true;
            ren++;
        } else if (s[i] == '-') {
            kusi = true;
            if (ren > max) {
                max = ren;
            }
            ren = 0;
        }
        if (i == n - 1) {
            if (ren > max) {
                max = ren;
            }
        }
    }
    if (maru && kusi) {
        cout << max << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
