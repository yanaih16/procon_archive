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
    vector<i64> a(n), b(m);
    for (auto& v : a) cin >> v;
    sort(a.begin(), a.end());
    a.push_back(LONG_LONG_MAX);
    for (auto& v : b) cin >> v;
    sort(b.begin(), b.end());
    b.push_back(LONG_LONG_MAX);
    i64 sell = 0;
    i64 buy = m;
    i64 x;
    for (i64 i = 0, j = 0; i + j < m + n;) {
        if (a[i] <= b[j]) {
            sell++;
            x = a[i];
            i++;
        } else {
            buy--;
            x = b[j] + 1;
            j++;
        }

        if (sell >= buy) {
            cout << x << endl;
            return;
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
