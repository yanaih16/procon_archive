#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n;
    string s;
    cin>>n>>s;
    if(n%2!=0){
        cout<<"No"<<endl;
        return 0;
    }
    for(i64 i=0;i<n/2;i++){
        if(s[i]!=s[n/2+i]) {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}