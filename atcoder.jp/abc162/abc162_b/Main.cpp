#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,ans=0;
    cin>>n;
    for(i64 i=1;i<=n;i++){
        if(i%3!=0&&i%5!=0) ans+=i;
    }
    cout<<ans<<endl;
    return 0;
}
