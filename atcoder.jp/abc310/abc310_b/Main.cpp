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
    i64 n, m;
    cin >> n >> m;
    vector<i64> p(n);
    vector<vector<i64>> f(n);
    rep(i, n) {
        cin >> p[i];
        i64 c;
        cin >> c;
        rep(j, c) {
            i64 a;
            cin >> a;
            f[i].push_back(a);
        }
    }
    rep(i, n) {
        rep(j, n) {
            bool c = false;
            if (i != j && p[i] >= p[j] && f[i].size() <= f[j].size()) {
                c = true;
                rep(k, f[i].size()) {
                    if (find(f[j].begin(), f[j].end(), f[i][k]) == f[j].end()) {
                        c = false;
                        break;
                    }
                }
                if (c) {
                    if (p[i] <= p[j] && f[i].size() >= f[j].size()) {
                        c = false;
                    }
                }
            }
            if (c) {
                cout << "Yes" << endl;
                return;
            }
        }
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
