#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
#define vsort(v) sort(v.begin(), v.end())
#define vsortr(v) sort(v.begin(), v.end(), greater<i64>)
#define fi first
#define se second
#define MOD 998244353
typedef pair<i64, i64> P;

void Main() {
    i64 n, d, ans = 0;
    cin >> n >> d;
    vector<string> s(n);
    for (auto& v : s) cin >> v;
    rep(i, d) {
        rep2(j, i + 1, d + 1) {
            bool c = true;
            rep2(k, i, j) {
                rep(l, n) {
                    if (s[l][k] == 'x') c = false;
                }
            }
            if (c) {
                if (j - i > ans) ans = j - i;
            }
        }
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
