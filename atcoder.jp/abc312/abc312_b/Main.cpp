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
    vector<string> s(n);
    for (auto& v : s) {
        cin >> v;
    }
    rep(i, n - 8) {
        rep(j, m - 8) {
            vector<string> a(9);
            rep(k, 9) {
                a[k] = s[i + k].substr(j, 9);
            }
            bool f = true;
            rep(k, 9) {
                rep(l, 9) {
                    if (k < 3 && l < 3) {
                        if (a[k][l] == '.') f = false;
                    } else if ((k == 3 && l < 4) || (l == 3 && k < 4)) {
                        if (a[k][l] == '#') f = false;
                    } else if (k > 5 && l > 5) {
                        if (a[k][l] == '.') f = false;
                    } else if ((k == 5 && l > 4) || (l == 5 && k > 4)) {
                        if (a[k][l] == '#') f = false;
                    }
                }
            }
            if (f) {
                cout << i + 1 << " " << j + 1 << endl;
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
