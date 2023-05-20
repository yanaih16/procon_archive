#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, m;
    cin >> n >> m;
    vector<string> s(n);
    vector<i64> a(n);
    for (i64 i = 0; i < n; i++) {
        cin >> s[i];
        a[i] = i;
    }

    do {
        bool f = true;
        for (i64 i = 0; i < n - 1; i++) {
            i64 count = 0;
            for (i64 j = 0; j < m; j++) {
                if (s[a[i]][j] != s[a[i+ 1] ][j]) count++;
            }
            if (count != 1) {
                f = false;
                break;
            }
        }
        if (f) {
            cout << "Yes" << endl;
            return 0;
        }
    } while (next_permutation(a.begin(), a.end()));
    cout << "No" << endl;

    return 0;
}
