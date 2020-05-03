#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,m;
    cin>>n>>m;
    vector<i64> h(n);
    bool t[n];
    for(i64 i=0;i<n;i++) {
        cin>>h[i];
        t[i]=true;
    }
    for(i64 i=0;i<m;i++){
        i64 a,b;
        cin>>a>>b;
        if(h[a-1]<h[b-1]) t[a-1]=false;
        else if(h[a-1]>h[b-1]) t[b-1]=false;
        else{
            t[a-1]=false;
            t[b-1]=false;
        }
    }
    i64 ans=0;
    for(i64 i=0;i<n;i++){
        if(t[i]) ans++;
    }
    cout<<ans<<endl;

    return 0;
}