#include<bits/stdc++.h>

using namespace std;
using i64 = long long;

int main(){
    i64 n,d,ans{};
    cin>>n>>d;
    for(i64 i=0;i<n;i++){
        i64 a,b;
        cin>>a>>b;
        ans+=(d*d>=a*a+b*b?1:0);
    }
    cout<<ans<<endl;

    return 0;
}