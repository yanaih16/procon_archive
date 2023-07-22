#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
#define vsort(v) sort(v.begin(), v.end())
#define vsortr(v) sort(v.begin(), v.end(), greater<i64>)
#define fi first
#define se second
#define MOD 998244353
typedef pair<i64, i64> P;

void Main() {
    i64 dx[4] = {1, 0, -1, 0};
    i64 dy[4] = {0, 1, 0, -1};
    i64 n, m;
    i64 ans = 0;
    cin >> n >> m;
    vector<string> s(n);
    for (auto& v : s) cin >> v;
    stack<P> a;
    a.push(make_pair(1, 1));
    s[1][1] = '@';
    while (!a.empty()) {
        P p = a.top();
        a.pop();
        rep(i, 4) {
            i64 x = p.fi;
            i64 y = p.se;
            if (s[y + dy[i]][x + dx[i]] != '#') {
                bool f = false;
                while (s[y + dy[i]][x + dx[i]] != '#') {
                    y += dy[i];
                    x += dx[i];
                    if (s[y][x] == '.') f = true;
                    s[y][x] = '@';
                }
                if (f) a.push(make_pair(x, y));
            }
        }
    }
    for (auto v : s) {
        for (auto vv : v) {
            if (vv == '@') ans++;
        }
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
