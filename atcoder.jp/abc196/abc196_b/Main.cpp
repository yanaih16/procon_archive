#include<bits/stdc++.h> 
using namespace std;
using i64 = long long;

int main(){
    string s;
    cin>>s;
    i64 a=0;
    for(i64 i=0;i<s.size();i++){
        if(s[i]!='.') a++;
        else break;
    }
    for(i64 i=0;i<a;i++){
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}