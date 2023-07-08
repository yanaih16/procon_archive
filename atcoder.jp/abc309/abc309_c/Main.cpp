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
    i64 sum = 0;
    i64 n, k;
    cin >> n >> k;
    vector<P> a(n);
    for (auto& v : a) {
        cin >> v.fi >> v.se;
        sum += v.se;
    }
    if (sum <= k) {
        cout << 1 << endl;
        return;
    }
    sort(a.begin(), a.end());
    rep(i, n) {
        sum -= a[i].se;
        if (sum <= k) {
            cout << a[i].fi + 1 << endl;
            return;
        }
    }
    cout << a[n - 1].fi + 1 << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
