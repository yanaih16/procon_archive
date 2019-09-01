#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int ans=0;
    string s,t;
    cin>>s>>t;
    for(int i=0;i<3;i++){
        ans += (s[i]==t[i]?1:0);
    }
    cout<<ans<<endl;
    return 0;
}