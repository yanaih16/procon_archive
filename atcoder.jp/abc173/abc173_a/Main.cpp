#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n;
    cin>>n;
    if(n%1000==0){
        cout<<0<<endl;
    }
    else{
        cout<<1000-(n%1000)<<endl;
    }
    return 0;
}