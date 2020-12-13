#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    unsigned long long l,a=1,b=1;
    cin>>l;
    for(i64 i=1;i<=11;i++){
        a *= (l-i);
        a /= i;
    }
    cout<<a<<endl;
    return 0;
}