#include <bits/stdc++.h>
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
using namespace std;
using i64 = long long;
typedef pair<i64, i64> P;

void Main() {
    i64 n, m;
    i64 ans = 0;
    i64 count = 0;
    cin >> n >> m;
    vector<vector<i64>> a(m, vector<i64>(n));
    for(auto & v : a){
        for(auto & vv : v ) cin >> vv;
    }
    rep2(i, 1,  n + 1){
        rep2(j, i + 1, n + 1){
            bool f = false;
            rep(k, m){
                rep(l, n - 1){
                    if((a[k][l] == i && a[k][l + 1] == j)){
                        f = true;
                    } else if(a[k][l] == j && a[k][l + 1] == i){
                        f = true;
                    }
                }
                if(f){
                    count++;
                    break;
                }
            }
        }
    }
    ans = n * (n - 1) / 2 - count;;
    cout << ans << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
