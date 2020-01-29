#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n;
    string s,t;
    cin>>n>>s>>t;
    for(i64 i=0;i<n;i++){
        cout<<s[i]<<t[i];
    }
    cout<<endl;
    return 0;
}