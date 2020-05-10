#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main()
{
    i64 a,b,c,k,ans=0;
    cin>>a>>b>>c>>k;
    if(k>a){
        ans+=a;
        k-=a;
        k-=b;
        if(k>0){
            if(k>c) ans-=c;
            else ans-=k;
        }
    }
    else {
        ans+=k;
    }
    cout<<ans<<endl;
    return 0;
}
