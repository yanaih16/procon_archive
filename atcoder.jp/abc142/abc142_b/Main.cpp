#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,k,ans=0;
    cin>>n>>k;
    for(i64 i=0;i<n;i++){
        i64 a;
        cin>>a;
        if(a>=k)ans++;
    }
    cout<<ans<<endl;
    return 0;
}
