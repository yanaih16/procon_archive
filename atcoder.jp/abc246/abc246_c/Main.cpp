#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,k,x;
    cin>>n>>k>>x;
    vector<i64> a(n);
    for(i64 i=0;i<n;i++) cin>>a[i];
    sort(a.rbegin(),a.rend());
    i64 i=0;
    while(k!=0&&a[i]>x){
        if(a[i]/x<k){
            k -= a[i]/x;
            a[i] = a[i]%x;
            i++;
        }
        else{
            a[i] = a[i] - k*x;
            k=0;
        }
    }
    if(k!=0){
        sort(a.begin(),a.end());
        i=0;
        for(i=n-1;k>0;k--){
            a[i]=0;
            i--;
            if(a[i]==0||i<0) break;
        }
    }
    i64 ans=0;
    for(i=0;i<n;i++) ans += a[i];

    cout<<ans<<endl;

    return 0;
}