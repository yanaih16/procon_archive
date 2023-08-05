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
    i64 n;
    cin >> n;
    vector<i64> a(n);
    for (auto& v : a) cin >> v;
    i64 p = a[0];
    sort(a.begin(), a.end(), greater<i64>());
    if (a[0] == p && a[0] == a[1]) {
        cout << 1 << endl;
    } else if (a[0] == p) {
        cout << 0 << endl;
    } else {
        cout << a[0] - p + 1 << endl;
    }
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
