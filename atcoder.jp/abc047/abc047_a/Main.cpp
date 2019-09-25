#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 a,b,c;
    cin>>a>>b>>c;
    if(a+b==c||a+c==b||b+c==a){
    cout<<"Yes"<<endl;
    return 0;
    } 
    cout<<"No"<<endl;
    return 0;
}
