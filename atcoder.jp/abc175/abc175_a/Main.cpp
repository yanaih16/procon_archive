#include<bits/stdc++.h>

using namespace std;
using i64 = long long;

int main(){
    i64 a{},ans{};
    string s;
    cin>>s;
    for(i64 i=0;i<3;i++){
        if(s[i]=='R') a++;
        else {
            ans=(ans<a?a:ans);
            a=0;
        }
    }
    ans=(ans<a?a:ans);
    cout<<ans<<endl;
    return 0;
}