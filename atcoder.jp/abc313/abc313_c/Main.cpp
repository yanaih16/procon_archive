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
    i64 sum = 0;
    vector<i64> a(n);
    for (auto& v : a) {
        cin >> v;
        sum += v;
    }
    i64 ave = sum / n;
    vector<i64> b(n, ave);
    rep(i, sum % n) {
        b[i]++;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    i64 ans = 0;
    rep(i, n) {
        ans += abs(a[i] - b[i]);
    }
    cout << ans / 2 << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
