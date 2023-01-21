#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

i64 dp[5001][10001];

int main() {
    i64 n, x;
    cin >> n >> x;
    i64 sum = 0;
    vector<i64> m;
    m.push_back(0);
    for (i64 i = 0; i < n; i++) {
        i64 a, b;
        cin >> a >> b;
        sum += b;
        for (i64 j = 0; j < b; j++) m.push_back(a);
    }
    for(i64 i = 0; i < x; i++) dp[0][i] = 0;
    dp[0][0] = 1;
    for(i64 i = 1; i <= sum; i++){
        for(i64 j = 0; j <= x; j++){
            if(j < m[i]){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = (dp[i-1][j] | dp[i-1][j - m[i]]);
            }
        }

    }
    if(dp[sum][x]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}