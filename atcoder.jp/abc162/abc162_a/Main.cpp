#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    string s;
    cin>>s;
    for(i64 i=0;i<3;i++){
        if(s[i]=='7'){
            cout<<"Yes"<<endl;
            return 0;
        }
    }

    cout<<"No"<<endl;
    return 0;
}
