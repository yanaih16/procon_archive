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
    vector<i64> a(n), b(n);
    set<i64> t;
    for (auto& v : a) cin >> v;
    rep2(i, 2, n) {
        if (i % 2 == 1) continue;
        b[i] = b[i - 1] + (a[i] - a[i - 1]);
        b[i + 1] = b[i];
    }
    i64 q;
    cin >> q;
    rep(i, q) {
        i64 l, r;
        cin >> l >> r;
        i64 x = distance(a.begin(), lower_bound(a.begin(), a.end(), l));
        i64 y = distance(a.begin(), lower_bound(a.begin(), a.end(), r));
        i64 ll, rr;
        if (x == 0) {
            ll = 0;
        } else if (b[x] == b[x - 1]) {
            ll = b[x];
        } else {
            ll = b[x - 1];
            ll += l - a[x - 1];
        }
        if (y == 0) {
            rr = 0;
        } else if (b[y] == b[y - 1]) {
            rr = b[y];
        } else {
            rr = b[y - 1];
            rr += r - a[y - 1];
        }
        cout << rr - ll << endl;
    }
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
