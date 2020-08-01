#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    string t,s,u;
    i64 a,b;
    cin>>s>>t>>a>>b>>u;
    if(s==u) a--;
    else b--;
    cout<<a<<" "<<b<<endl;
    return 0;
}