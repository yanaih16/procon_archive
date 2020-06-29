#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 ans{};
    string s,t;
    cin>>s>>t;
    for(i64 i=0;i<s.size();i++){
        if(s[i]!=t[i])ans++;
    }
    cout<<ans<<endl;
    return 0;
}