#include <bits/stdc++.h>
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
using namespace std;
using i64 = long long;
typedef pair<i64, i64> P;

void Main() {
    i64 n;
    string s, t;
    cin >> n >> s >> t;
    rep(i, n){
        if(s[i] == t[i]){
            continue;
        } else if((s[i] == '1' && t[i] == 'l') || (s[i] == 'l' && t[i] == '1')){
            continue;
        } else if((s[i] == '0' && t[i] == 'o') || (s[i] == 'o' && t[i] == '0')){
            continue;
        } else {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
