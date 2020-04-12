#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

i64 gcd(i64 a,i64 b){
    if(a<b) swap(a,b);
    int tmp;
    while(a%b!=0){
        tmp = a%b;
        a = b;
        b = tmp;
    }
    return b;
}

int main(){
    i64 n,ans=0;
    cin>>n;
    for(i64 i=1;i<=n;i++){
        for(i64 j=1;j<=n;j++){
            for(i64 k=1;k<=n;k++)
                ans+=gcd(gcd(i,j),k);
        }
    }
    cout<<ans<<endl;
    return 0;
}
