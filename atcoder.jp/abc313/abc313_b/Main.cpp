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
    i64 n, m;
    cin >> n >> m;
    vector<bool> f(n + 1, true);
    rep(i, m) {
        i64 a, b;
        cin >> a >> b;
        f[b] = false;
    }
    bool a = false;
    i64 ans = 0;
    rep2(i, 1, n + 1) {
        if (f[i]) {
            if (a) {
                cout << -1 << endl;
                return;
            }
            a = true;
            ans = i;
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
