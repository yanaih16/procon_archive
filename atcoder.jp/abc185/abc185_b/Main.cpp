#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,m,t,k={};
    cin>>n>>m>>t;
    i64 max=n;
    for(i64 i=0;i<m;i++){
        i64 a,b;
        cin>>a>>b;
        n -= (a-k);
        if(n<=0){
            cout<<"No"<<endl;
            return 0;
        }
        n += (b-a);
        if(n>max) n = max;
        k = b;
    }
    n -= (t-k);
    if(n<=0){
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
    return 0;
}