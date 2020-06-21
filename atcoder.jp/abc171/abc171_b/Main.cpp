#include<bits/stdc++.h>

using namespace std;
using i64 = long long;

int main(){
    i64 n,k,ans{};
    cin>>n>>k;
    i64 a[n];
    for(i64 i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i64 i=0;i<k;i++){
        ans+=a[i];
    }
    cout<<ans<<endl;

    return 0;
}