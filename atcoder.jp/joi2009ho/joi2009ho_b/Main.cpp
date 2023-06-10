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
    i64 d, n, m;
    i64 ans = 0;
    cin >> d >> n >> m;
    vector<i64> a(n - 1);
    for (auto& v : a) cin >> v;
    a.push_back(0);
    a.push_back(d);
    sort(a.begin(), a.end());
    rep(i, m) {
        i64 b;
        cin >> b;
        i64 x = distance(a.begin(), lower_bound(a.begin(), a.end(), b));
        ans += min(abs(b - a[x]), abs(b - a[x - 1]));
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
