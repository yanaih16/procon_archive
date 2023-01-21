#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, a, b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    i64 ans = LONG_LONG_MAX;
    for(i64 i = 0; i < (i64)s.size(); i++){
        i64 l = i;
        i64 r = s.size() + i - 1;
        i64 miss = 0;
        for(i64 j = 0; j < (i64)s.size()/2; j++){
            if(s[l+j] != s[(r-j)%s.size()]) miss++;
        }
        i64 cost = i * a + miss * b;
        ans = min(ans, cost);
    }
    cout<<ans<<endl;
    return 0;
}