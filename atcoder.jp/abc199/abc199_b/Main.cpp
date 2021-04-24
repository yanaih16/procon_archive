#include<bits/stdc++.h> 
using namespace std;
using i64 = long long;

int main(){
    i64 n,amax=0,bmin=1000;
    cin>>n;
    for(i64 i=0;i<n;i++){
        i64 a;
        cin>>a;
        if(amax<a) amax = a;
    }
    for(i64 i=0;i<n;i++){
        i64 b;
        cin>>b;
        if(bmin>b) bmin = b;
    }
    cout<<(bmin-amax+1>0?bmin-amax+1:0)<<endl;
    return 0;
}