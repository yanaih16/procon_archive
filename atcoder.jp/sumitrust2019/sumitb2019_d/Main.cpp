#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,ans=0;
    string s;
    cin>>n>>s;
    for(i64  i=0;i<1000;i++){
        i64 c[3]={i/100,(i/10)%10,i%10};
        int f=0;
        for(i64 j=0;j<n;j++){
            if(s[j]==('0'+c[f])) f++;
            if(f==3) break;
        }
        if(f==3) ans++;
    }
    cout<<ans<<endl;
    return 0;
}