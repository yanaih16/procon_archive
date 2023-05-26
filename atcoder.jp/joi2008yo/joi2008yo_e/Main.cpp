#include <bits/stdc++.h>
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
using namespace std;
using i64 = long long;
typedef pair<i64, i64> P;

void Main() {
    i64 c, r;
    i64 ans = 0;
    cin >> r >> c;
    vector<vector<i64>> a(r, vector<i64>(c));
    for (auto& v : a) {
        for (auto& vv : v) cin >> vv;
    }
    rep(i, 1 << r) {
        auto b = a;
        bitset<10> bi(i);
        rep(j, r) {
            if (bi[j] == 0) continue;
            rep(k, c) b[j][k] = b[j][k] == 0;
        }
        i64 sum = 0;
        rep(i, c) {
            i64 num = 0;
            rep(j, r) {
                if(b[j][i] == 1) num++;
            }
            sum += max(num, r - num);
        }
        ans = max(ans, sum);
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
