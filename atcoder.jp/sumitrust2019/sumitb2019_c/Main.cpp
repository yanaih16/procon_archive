#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

bool dp[100001];

int main(){
    i64 n;
    int sina[6]={100,101,102,103,104,105};
    cin>>n;
    for(i64 i=0;i<n;i++) dp[i]=0;
    dp[0]=1;
    for(i64 i=0;i<n+1;i++){
        for(i64 j=0;j<6;j++){
            if(sina[j]<=i) dp[i]|=dp[i-sina[j]];
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}