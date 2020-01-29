#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,ans=0;
    string s;
    cin>>n>>s;
    for(i64 i=0;i<n-2;i++){
        if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='C') ans++;
    }
    cout<<ans<<endl;
    return 0;
}