#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
int main(){
    i64 n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)ans += i;
    cout<<ans<<endl; 
    return 0;
}
