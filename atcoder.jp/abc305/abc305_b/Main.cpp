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
    i64 a[6] = {3, 1, 4, 1, 5, 9};
    char p, q;
    cin >> p >> q;
    i64 c = (p - 'A'), b = (q - 'A');
    if (c > b) swap(c, b);
    rep2(i, c, b) ans += a[i];
    cout << ans << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
