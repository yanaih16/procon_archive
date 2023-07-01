#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
#define fi first
#define se second
#define MOD 998244353
typedef pair<i64, i64> P;

bool comp(pair<long double, i64>& p1, pair<long double, i64>& p2) {
    if (abs(p1.first - p2.first) < 1e-25) {
        return p1.se > p2.se;
    } else {
        return p1.fi > p2.fi;
    }
}

void Main() {
    i64 n;
    cin >> n;
    vector<pair<long double, i64>> p(n);
    rep(i, n) {
        long double a, b;
        cin >> a >> b;
        p[i].fi = a / (a + b);
        p[i].se = i * -1;
    }
    sort(p.begin(), p.end(), comp);
    for (auto v : p) {
        cout << -1 * v.se + 1 << " ";
    }
    cout << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
