#include<bits/stdc++.h>

using namespace std;
using i64 = long long;

int main(){
    string s;
    cin>>s;
    i64 ans{};
    for(i64 i=0;i<s.size();i++) ans+=s[i]-'0';

    cout<<(ans%9==0?"Yes":"No")<<endl;

    return 0;
}