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
    i64 n, ans = 0;
    cin >> n;
    vector<i64> a(n), b(n), c(n);
    for (auto& v : a) cin >> v;
    for (auto& v : b) cin >> v;
    for (auto& v : c) cin >> v;
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    for (auto v : b) {
        i64 x = distance(a.begin(), lower_bound(a.begin(), a.end(), v));
        i64 y = distance(c.begin(), upper_bound(c.begin(), c.end(), v));
        y = n - y;
        ans += x * y;
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
