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
    i64 c = 0;
    i64 n;
    cin >> n;
    vector<i64> a(n);
    set<i64> b;
    for (auto& v : a) cin >> v;
    while (1) {
        b.insert(c);
        c = a[c];
        c--;
        if (b.find(c) != b.end()) {
            break;
        }
    }
    i64 ans = 0, d = c;
    vector<i64> m;
    while (1) {
        ans++;
        m.push_back(c);
        c = a[c];
        c--;
        if (c == d) {
            break;
        }
    }
    cout << ans << endl;
    rep(i, ans) {
        cout << m[i] + 1 << " ";
    }
    cout << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
