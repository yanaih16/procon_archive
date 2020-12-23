#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,ans{};
    cin>>n;
    vector<i64> a(n);
    for(i64 i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end(),greater<i64>());
    for(i64 i=0;i<n;i++){
        ans += a[i]*(n-i-1);
        ans -= a[i]*i;
    }
    cout<<ans<<endl;


    return 0;
}