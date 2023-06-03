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
    vector<string> a(n);
    vector<i64> b(n);
    i64 min = 1000000000, c;
    rep(i, n){
        cin >> a[i] >> b[i];
        if(min > b[i]){
            min = b[i];
            c = i;
        }
    }
    rep(i, n){
        cout << a[(i + c) % n] << endl;
    }

}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
