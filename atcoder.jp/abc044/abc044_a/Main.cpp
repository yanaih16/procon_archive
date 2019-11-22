#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
int main(){
    i64 n,k,x,y;
    cin>>n>>k>>x>>y;
    if(n<k) cout<<n*x<<endl;
    else cout<<k*x+(n-k)*y<<endl; 
    return 0;
}
