#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 a,b,c,ans=3;
    cin>>a>>b>>c;
    if(a==b) ans--;
    if(c==b) ans--;
    if(a==c) ans--;
    if(ans==0) ans++;
    cout<<ans<<endl;
    return 0;
}
