#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, m;
    i64 ans = 0;
    cin>>n>>m;
    vector<i64> s(n), t(m);
    for(i64 i = 0; i < n; i++){
        cin>>s[i];
    }
    for(i64 i = 0; i < m; i++){
        cin>>t[i];
    }
    for(i64 i = 0; i < n; i++){
        for(i64 j = 0; j < m; j++){
            if(s[i]%1000 == t[j]){
                ans++;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}