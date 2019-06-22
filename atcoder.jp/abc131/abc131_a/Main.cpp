#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    string s;
    bool a=true;
    cin>>s;
    for(int i=0;i<3;i++){
        if(s[i]==s[i+1]) a = false;
    }
    if(a) cout<<"Good"<<endl;
    else cout<<"Bad"<<endl;
    return 0;
}