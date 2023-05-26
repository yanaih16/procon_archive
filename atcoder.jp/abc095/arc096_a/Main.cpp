#include <bits/stdc++.h>
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
using namespace std;
using i64 = long long;

void Main() {
    i64 a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    i64 ans = LONG_LONG_MAX;
    rep(i, max(x, y) * 2 + 1) {
        i64 pa = i / 2, pb = i / 2;
        i64 sum = i * c;
        if(pa < x) sum += (x - pa) * a;
        if(pb < y) sum += (y - pb) * b;
        if(sum < ans) ans = sum;
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
