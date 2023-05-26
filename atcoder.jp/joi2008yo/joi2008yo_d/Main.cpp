#include <bits/stdc++.h>
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
using namespace std;
using i64 = long long;
typedef pair<i64, i64> P;

void Main() {
    i64 m;
    cin >> m;
    vector<P> a(m);
    for(auto & v : a){
        cin >> v.first >> v.second;
    }
    i64 n;
    cin >> n;
    set<P> b;
    rep(i, n){
        i64 x, y;
        cin >> x >> y;
        b.insert(make_pair(x, y));
    }

    for(auto v : b){
        i64 count = 0;
        i64 x = v.first;
        i64 y = v.second;
        rep(i, n - 1){
            x += a[i + 1].first - a[i].first;
            y += a[i + 1].second - a[i].second;
            if(b.find(make_pair(x, y)) == b.end())break;
            count++;
        }
        if(count == m - 1){
            cout << v.first - a[0].first << " " << v.second - a[0].second << endl;
            break;
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
