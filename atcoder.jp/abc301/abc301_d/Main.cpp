#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define MOD 998244353

int main() {
    string s;
    i64 n;
    cin >> s >> n;
    i64 keta = s.size();
    i64 sum = 0;
    vector<i64> a;
    vector<i64> bin(60);
    bin[0] = 1;
    for(i64 i = 1; i < 60; i++){
        bin[i] = bin[i-1] * 2;
    }
    for (i64 i = 0; i < keta; i++) {
        if (s[i] == '1') {
            sum += bin[keta - 1 - i];
        } else if (s[i] == '?') {
            i64 b = bin[keta - 1 - i];
            a.push_back(b);
        }
    }
    i64 b = a.size();
    if(sum > n){
        cout << -1 << endl;
        return 0;
    }
    for(i64 i = 0; i < b; i++) {
        if(n >= sum + a[i]) sum += a[i];
    }
    cout << sum << endl;
    return 0;
}
