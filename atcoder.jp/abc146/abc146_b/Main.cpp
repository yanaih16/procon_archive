#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n;
    string s;
    cin>>n>>s;
    for(i64 i=0;i<s.size();i++){
        s[i] = (s[i]+n-'A')%26+'A';
    }
    cout<<s<<endl;
    return 0;
}