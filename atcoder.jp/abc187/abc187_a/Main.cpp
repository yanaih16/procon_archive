#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 m,n;
    cin>>n>>m;
    i64 ms=0,ns=0;
    for(i64 i=0;i<3;i++){
        ns += n%10;
        ms += m%10;
        n /= 10;
        m /= 10;
    }
    cout<<(ns>ms?ns:ms)<<endl;
    return 0;
}