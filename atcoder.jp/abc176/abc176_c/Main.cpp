#include<bits/stdc++.h>

using namespace std;
using i64 = long long;

int main(){
    i64 n,high,ans{};
    cin>>n;
    cin>>high;
    for(i64 i=1;i<n;i++){
        i64 a;
        cin>>a;
        if(high <= a){
            high = a;
        }
        else {
            ans+= high - a;
        }
    }
    cout<<ans<<endl;

    return 0;
}