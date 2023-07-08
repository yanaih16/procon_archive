#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
#define fi first
#define se second
#define MOD 998244353
typedef pair<i64, i64> P;

void Main() {
    i64 n;
    cin >> n;
    vector<string> a(n), b(n);
    for (auto& v : a) {
        cin >> v;
    }
    rep(i, n) {
        b[i] = a[i];
    }
    rep(i, n - 1) {
        b[0][i + 1] = a[0][i];
        b[i + 1][n - 1] = a[i][n - 1];
        b[n - 1][n - 1 - i - 1] = a[n - 1][n - 1 - i];
        b[n - 1 - i - 1][0] = a[n - 1 - i][0];
    }
    rep2(i, 1, n - 1) {
        rep2(j, 1, n - 1) {
            b[i][j] = a[i][j];
        }
    }
    rep(i, n) {
        rep(j, n) {
            cout << b[i][j];
        }
        cout << endl;
    }
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
