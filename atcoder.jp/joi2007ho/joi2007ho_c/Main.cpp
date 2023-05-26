#include <bits/stdc++.h>
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
using namespace std;
using i64 = long long;
typedef pair<i64, i64> P;

void Main() {
    i64 n;
    cin >> n;
    set<P> a;
    vector<P> b(n);
    for(auto & v : b){
        cin >> v.first >> v.second;
        a.insert(v);
    }
    i64 ans = 0;

    rep(i, n){
        rep2(j, i + 1, n){
            i64 dx = b[i].first - b[j].first;
            i64 dy = b[i].second - b[j].second;
            if(a.find(make_pair(b[i].first + dy, b[i].second - dx)) != a.end() && a.find(make_pair(b[j].first + dy, b[j].second - dx)) != a.end()){
                ans = max(ans, dx * dx + dy * dy);
            }else if(a.find(make_pair(b[i].first - dy, b[i].second + dx)) != a.end() && a.find(make_pair(b[j].first - dy, b[j].second + dx)) != a.end()){
                ans = max(ans, dx * dx + dy * dy);
            }
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
