#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n;
    bool a=false;
    cin>>n;
    for(i64 i=0;i<10;i++){
        for(i64 j=0;j<10;j++){
            if(n==i*j) a=true; 
        }
    }
    if(a) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
