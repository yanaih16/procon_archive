#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,sum=0,ans=0;
    cin>>n;
    i64 a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<n-1;i++){
        sum-=a[i];
        ans+=sum*a[i];
    }
    cout<<ans<<endl;
    return 0;
}
