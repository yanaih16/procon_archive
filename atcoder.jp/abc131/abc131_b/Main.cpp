#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int n,l,ans=0;
    cin>>n>>l;
    if(l>=0){
        for(int i=2;i<=n;i++){
            ans+=l+i-1;
        }
    }
    else if(n+l>0){
        for(int i=1;i<=n;i++){
            ans+=l+i-1;
        }
    }
    else {
        for(int i=1;i<n;i++){
            ans+=l+i-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}