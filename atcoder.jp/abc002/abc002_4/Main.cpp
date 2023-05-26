#include <bits/stdc++.h>
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
using namespace std;
using i64 = long long;
typedef pair<i64, i64> P;

void Main() {
    i64 n, m;
    cin >> n >> m;
    set<P> a;
    rep(i, m) {
        i64 x, y;
        cin >> x >> y;
        a.insert(make_pair(x, y));
    }
    i64 ans = 0;
    rep(i, 1 << n) {
        bitset<12> bi(i);
        bool f = true;
        rep(i, n) {
            rep2(j, i + 1, n) {
                if (bi[i] & bi[j] && a.find(make_pair(i + 1, j + 1)) == a.end()) {
                    f = false;
                    break;
                }
            }
            if(!f){
                break;
            }
        }
        if (f) {
            if (ans < bi.count()) {
                ans = bi.count();
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
