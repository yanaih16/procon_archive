#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int n,x,ans=1,a=0;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        a+=l;
        ans+=(a<=x?1:0);
    }
    cout<<ans<<endl;
    return 0;
}