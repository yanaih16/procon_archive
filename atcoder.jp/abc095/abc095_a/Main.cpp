#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    string s;
    int ans=700;
    cin>>s;
    for(int i=0;i<3;i++)
        if(s[i]=='o') ans += 100;
    cout<<ans<<endl;
    return 0;
}