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
    string snuke = "snuke";
    i64 count = 0;
    i64 dx[4] = {1, 0, -1, 0};
    i64 dy[4] = {0, 1, 0, -1};
    i64 h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (auto& v : s) cin >> v;
    queue<P> que;
    set<P> c;
    que.push(make_pair(0, 0));
    c.insert(make_pair(0, 0));
    while (!que.empty()) {
        P p = que.front();
        que.pop();
        if (p.fi == h - 1 && p.se == w - 1) {
            cout << "Yes" << endl;
            return;
        }
        char a = s[p.fi][p.se];
        i64 f = 0;
        while (a != snuke[f]) f++;
        char next = snuke[(f + 1) % 5];
        rep(i, 4) {
            i64 x = p.se + dx[i];
            i64 y = p.fi + dy[i];
            if (0 <= x && x < w && 0 <= y && y < h) {
                if (s[y][x] == next) {
                    if (c.find(make_pair(y, x)) == c.end()) {
                        que.push(make_pair(y, x));
                        c.insert(make_pair(y, x));
                    }
                }
            }
        }
        count++;
    }
    cout << "No" << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
