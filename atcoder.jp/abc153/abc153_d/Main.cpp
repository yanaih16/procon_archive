#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 h,count=1,ans=0;
    cin>>h;
    while(h!=0){
        h/=2;
        ans+=count;
        count*=2;
    }
    cout<<ans<<endl;
    return 0;
}