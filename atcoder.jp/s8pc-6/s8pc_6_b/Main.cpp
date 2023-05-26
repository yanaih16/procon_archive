#include <bits/stdc++.h>
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
using namespace std;
using i64 = long long;
typedef pair<i64, i64> P;

void Main() {
    i64 n;
    cin >> n;
    vector<i64> a(n), b(n);
    rep(i, n){
        cin >> a[i] >> b[i];
    }
    i64 mina = LONG_LONG_MAX, minb = LONG_LONG_MAX, ans = 0;

    rep(i, n){
        i64 suma = 0, sumb = 0;
        ans += abs(a[i] - b[i]);
        rep(j, n){
            suma += abs(a[j] - a[i]);
            sumb += abs(b[j] - b[i]);
        }
        if(suma < mina) mina = suma;
        if(sumb < minb) minb = sumb;
    }
    ans += mina + minb;
    cout << ans << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
