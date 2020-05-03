#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,k,b;
    cin>>n>>k;
    bool a[n];
    for(i64 i=0;i<n;i++) a[i]=false;
    for(i64 i=0;i<k;i++){
        cin>>b;
        vector<i64> c(b);
        for(i64 j=0;j<b;j++){
            cin>>c[j];
        }
        for(i64 j=0;j<b;j++){
            a[c[j]-1]=true;
        }
    }
    i64 ans=0;
    for(i64 i=0;i<n;i++){
        if(a[i]==false) ans++;
    }
    cout<<ans<<endl;

    return 0;
}