#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define MOD 998244353

int main() {
    i64 n;
    cin >> n;
    string s;
    cin >> s;
    i64 a = 0, t = 0;
    for(i64 i = 0; i < n; i++){
        if(s[i] == 'A') a++;
        else t++;
    }
    if(a > t) cout << "A" << endl;
    else if (a < t) cout << "T" << endl;
    else cout << (s[n-1] == 'A' ? "T" : "A") << endl;
    return 0;
}
