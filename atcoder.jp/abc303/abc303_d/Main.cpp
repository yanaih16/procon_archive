#include <bits/stdc++.h>
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
#define INF 1000000000000000000
using namespace std;
using i64 = long long;

typedef pair<i64, i64> P;

void Main() {
    i64 x, y, z;
    cin >> x >> y >> z;
    string s;
    cin >> s;
    vector<vector<i64>> dp(s.size() + 1, vector<i64>(2, INF));
    dp[0][0] = 0;
    rep(i, s.size()) {
        i64 a = s[i] == 'a' ? 0 : 1;
        rep(j, 2) {
            rep(k, 2) {
                i64 v = dp[i][j];
                if (j != k) v += z;
                if (a == k) v += x;
                else v += y;
                dp[i + 1][k] = min(dp[i + 1][k], v);
            }
        }
    }
    cout << min(dp[s.size()][0], dp[s.size()][1]) << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
