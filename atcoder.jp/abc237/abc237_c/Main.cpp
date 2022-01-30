#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    string s;
    cin>>s;
    i64 m=s.size(),u=0,size = s.size();
    for(i64 i=0;i<size-1;i++){
        if(s[i] != 'a'){
            m = i;
            break;
        }
    }
    for(i64 i=size-1;i>=0;i--){
        if(s[i] != 'a'){
            u = i;
            break;
        }
    }
    if(m>u) cout<<"Yes"<<endl;
    else if(m>size-u-1) cout<<"No"<<endl;
    else if(m<u){
        for(i64 i=0;i<((u-m)+1)/2;i++){
            if(s[i+m]!=s[u-i]){
                cout<<"No"<<endl;
                return 0;
            }
        }
        cout<<"Yes"<<endl;
    }
    else cout<<"Yes"<<endl;

    return 0;
}