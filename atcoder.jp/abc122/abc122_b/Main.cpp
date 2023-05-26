#include <bits/stdc++.h>
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
using namespace std;
using i64 = long long;

void Main() {
    string s;
    cin >> s;
    i64 ans = 0, ren = 0;
    rep(i, s.size()) {
        if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T') {
            ren++;
        } else {
            if (ren > ans) {
                ans = ren;
                ren = 0;
            }
        }
    }
    if (ren > ans) {
        ans = ren;
        ren = 0;
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
