#include <bits/stdc++.h>
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
using namespace std;
using i64 = long long;

void Main() {
    i64 n, m;
    cin >> n >> m;
    vector<vector<i64>> a(n, vector<i64>(m));
    for(auto & v : a){
        for(auto& vv:v){
            cin >> vv;
        }
    }
    i64 ans = 0;
    rep(i, m){
        rep2(j, i + 1, m) {
            i64 sum = 0;
            rep(k, n){
                sum += (a[k][i] < a[k][j] ? a[k][j] : a[k][i]);
            }
            if(sum > ans) ans = sum;
        }
    }
    cout << ans << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
