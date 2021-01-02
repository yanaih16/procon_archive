#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,ans=0;
    cin>>n;
    i64 x[n],y[n];
    for(i64 i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    for(i64 i=0;i<n-1;i++){
        for(i64 j=i+1;j<n;j++){
            if(abs(x[i]-x[j])>=abs(y[i]-y[j])) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}