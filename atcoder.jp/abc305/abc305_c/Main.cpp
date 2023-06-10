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
    i64 h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (auto& v : s) cin >> v;
    i64 min_x = w - 1, max_x = 0, min_y = h - 1, max_y = 0;
    rep(i, h) {
        rep(j, w) {
            if (s[i][j] == '#') {
                min_x = min(j, min_x);
                max_x = max(j, max_x);
                min_y = min(i, min_y);
                max_y = max(i, max_y);
            }
        }
    }

    rep2(i, min_y, max_y + 1) {
        rep2(j, min_x, max_x + 1) {
            if (s[i][j] == '.') {
                cout << i + 1 << " " << j + 1 << endl;
                return;
            }
        }
    }
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
