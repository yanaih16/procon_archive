#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,ans=0;
    cin>>n;
    for(i64 i=0;i<n;i++){
        i64 a,b;
        cin>>a>>b;
        ans += (a+b)*(b-a+1)/2;
    }
    cout<<ans<<endl;
    return 0;
}