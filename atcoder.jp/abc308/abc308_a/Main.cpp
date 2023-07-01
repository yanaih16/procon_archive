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
    i64 a[8];
    for (auto& v : a) cin >> v;
    rep(i, 7) {
        if (a[i] > a[i + 1]) {
            cout << "No" << endl;
            return;
        }
    }
    rep(i, 8) {
        if (a[i] < 100 || a[i] > 675 || a[i] % 25 != 0) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
    return;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
