#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 ans=0;
    string s;
    cin>>s;
    for(i64 i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1]) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
