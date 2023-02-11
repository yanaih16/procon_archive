#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

i64 dp[100001] = {};

int main() {
    i64 n, m, x;
    cin >> n;
    vector<i64> a(n);
    for (i64 i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    vector<i64> b(m);
    for (i64 i = 0; i < m; i++) {
        cin>>b[i];
        dp[b[i]] = -1;
    }
    cin>>x;
    dp[0] = 1;
    for(i64 i = 0; i <= x; i++){
        if(dp[i] == -1) continue;
        for(i64 j = 0; j < n; j++){
            if(i >= a[j]){
                if(dp[i - a[j]] == 1) dp[i] = 1;
            }
        }
    }
    if(dp[x] == 1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
