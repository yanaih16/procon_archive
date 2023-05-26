#include <bits/stdc++.h>
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
using namespace std;
using i64 = long long;
typedef pair<i64, i64> P;

void Main() {
    i64 n, m;
    cin >> n >> m;
    vector<vector<i64>> s(m);
    vector<i64> p(m);
    rep(i, m) {
        i64 k;
        cin >> k;
        rep(j, k) {
            i64 a;
            cin >> a;
            s[i].push_back(a);
        }
    }
    for (auto& v : p) cin >> v;

    i64 ans = 0;
    rep(i, 1 << n) {
        bitset<10> bi(i);
        bool f = true;
        rep(j, m) {
            i64 sum = 0;
            rep(k, s[j].size()){
                sum += bi[s[j][k] - 1];
            }
            if(sum % 2 != p[j]){
                f = false;
                break;
            }
        }
        if(f){
            ans++;
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
