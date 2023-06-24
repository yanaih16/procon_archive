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
    i64 n;
    cin >> n;
    vector<string> s(n);
    for (auto& v : s) cin >> v;
    rep(i, n) {
        rep(j, n) {
            if (i == j) continue;
            string a = s[i] + s[j];
            bool f = true;
            rep(k, a.size()) {
                if (a[k] != a[a.size() - 1 - k]) {
                    f = false;
                }
            }
            if (f) {
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
