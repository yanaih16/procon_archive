#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 ans = 1000;
    string s,t;
    cin>>s>>t;
    for(i64 i=0;i<=s.size()-t.size();i++){
        i64 a=0;
        for(i64 j=0;j<t.size();j++){
            if(s[i+j]!=t[j]){
                a++;
            }
        }
        ans = min(ans,a);
    }
    cout<<ans<<endl;
    return 0;
}
