#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 a,b,x,y;
    cin>>a>>b>>x>>y;
    cout<<max(max(max(a*x,a*y),b*x),b*y)<<endl;
    return 0;
}