#include <bits/stdc++.h>
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
using namespace std;
using i64 = long long;
typedef pair<i64, i64> P;

void Main() {
    i64 ans = LONG_LONG_MAX;
    i64 n, k;
    cin >> n >> k;
    vector<i64> a(n), h(n, 0);
    for (auto& v : a) cin >> v;
    rep(i, k) h[n - 1 - i] = 1;
    do {
        i64 sum = 0;
        i64 ma = a[0];
        auto b = a;
        rep2(i, 1, n) {
            if (h[i]) {
                sum += max(ma - b[i] + 1, (i64)0);
                if (ma >= b[i]) b[i] = ma + 1;
            }
            if (ma < b[i]) ma = b[i];
        }
        ans = min(sum, ans);
    } while (next_permutation(h.begin(), h.end()));
    cout << ans << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
