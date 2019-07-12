#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int a,b;
    cin>>a>>b;
    if(a==1) a+=13;
    if(b==1) b+=13;
    if(a==b) cout<<"Draw"<<endl;
    else cout<<(a<b?"Bob":"Alice")<<endl;
}