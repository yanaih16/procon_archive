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
    i64 ans = 0;
    i64 n, m;
    cin >> n >> m;
    vector<string> c(n), d(m);
    for (auto& v : c) cin >> v;
    for (auto& v : d) cin >> v;
    vector<i64> p(m + 1);
    for (auto& v : p) cin >> v;

    rep(i, n) {
        bool f = false;
        rep(j, m) {
            if (c[i] == d[j]) {
                ans += p[j + 1];
                f = true;
            }
        }
        if (!f) ans += p[0];
    }
    cout << ans << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
