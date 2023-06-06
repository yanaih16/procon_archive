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
    vector<i64> a(n), p(n), q(n);
    rep(i, n) a[i] = i + 1;
    rep(i, n) cin >> p[i];
    rep(i, n) cin >> q[i];
    i64 x = 0, y = 0;
    i64 c = 0;
    do {
        bool bp = true, bq = true;
        rep(i, n) {
            if (a[i] != p[i]) bp = false;
            if (a[i] != q[i]) bq = false;
        }
        if (bp) x = c;
        if (bq) y = c;
        c++;
    } while (next_permutation(a.begin(), a.end()));
    cout << abs(x - y) << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
