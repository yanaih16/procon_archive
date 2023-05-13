#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define MOD 998244353

int main() {
    map<char, i64> a, b, sub;
    for(i64 i = 0; i < 26; i++){
        char s = 'a' + i;
        a[s] = 0;
        b[s] = 0;
        sub[s] = 0;
    }
    a['@'] = 0;
    b['@'] = 0;
    string s, t;
    cin >> s >> t;
    for(i64 i = 0; i < s.size(); i++){
        a[s[i]]++;
        b[t[i]]++;
    }
    i64 an = 0, bn = 0;
    for(i64 i = 0; i < a.size() - 1; i++){
        char te = 'a' + i;
        if(a[te] != b[te]){
            if(te != 'a' && te != 't' && te != 'c' && te != 'o' && te != 'd' && te != 'e' && te != 'r' ) {
                cout << "No" << endl;
                return 0;
            }
            if(a[te] > b[te]){
                bn += a[te] - b[te];
            } else {
                an +- b[te] - a[te];
            }
        }
    }
    if(an <= a['@'] && bn <= b['@']) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
