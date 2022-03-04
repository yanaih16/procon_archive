#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 a[10],b=0;
    for(i64 i=0;i<10;i++) cin>>a[i];
    for(i64 i=0;i<2;i++){
        b = a[b];
    }
    cout<<a[b]<<endl;
    return 0;
}