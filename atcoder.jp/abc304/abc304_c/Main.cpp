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
    double d;
    cin >> n >> d;
    vector<P> a(n);
    vector<bool> b(n, false);
    queue<i64> c;
    b[0] = true;
    c.push(0);
    for(auto & v : a) cin >> v.first >> v.second;
    while(!c.empty()){
        i64 k = c.front();
        c.pop();
        rep(i, n){
            if(b[i] == true) continue;
            double dx = a[k].first - a[i].first;
            double dy = a[k].second - a[i].second;
            double r = dx * dx + dy * dy;
            if(sqrt(r) <= d){
                b[i] = true;
                c.push(i);
            }
        }
    }
    rep(i, n){
        if(b[i] == true) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
