#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    double a,b,c,x;
    cin>>a>>b>>c>>x;
    if(x<=a) cout<<1.000000<<endl;
    else if(a<x&&x<=b) cout<<c/(b-a)<<endl;
    else cout<<0<<endl;

    return 0;
}