#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n;
    cin>>n;
    vector<vector<i64>> a(n, vector<i64>(n)), b(n, vector<i64>(n));
    for (i64 i = 0; i < n; i++) {
        for (i64 j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (i64 i = 0; i < n; i++) {
        for (i64 j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }
    bool ans = true;
    for (i64 i = 0; i < n; i++) {
        for (i64 j = 0; j < n; j++) {
            if (a[i][j] == 1 && b[i][j] != 1) ans = false;
        }
    }
    if (ans) {
        cout << "Yes" << endl;
        return 0;
    }
    ans = true;

    for (i64 i = 0; i < n; i++) {
        for (i64 j = 0; j < n; j++) {
            if (a[n - 1 - j][i] == 1 && b[i][j] != 1) ans = false;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
        return 0;
    }
    ans = true;
    for (i64 i = 0; i < n; i++) {
        for (i64 j = 0; j < n; j++) {
            if (a[n - 1 - i][n - 1 - j] == 1 && b[i][j] != 1) ans = false;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
        return 0;
    }
    ans = true;
    for (i64 i = 0; i < n; i++) {
        for (i64 j = 0; j < n; j++) {
            if (a[j][n - 1 - i] == 1 && b[i][j] != 1) ans = false;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}
