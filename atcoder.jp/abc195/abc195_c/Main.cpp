#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,a=1000,b=0;
    cin>>n;
    if(n<a) {
        cout<<0<<endl;
        return 0;
    }
    a *= 1000;
    if(n<a){
        cout<<n-(a/1000)+1<<endl;
        return 0;
    }
    b += a-(a/1000);
    a *= 1000;
    if(n<a){
        cout<<(n-(a/1000)+1)*2+b<<endl;
        return 0;
    }
    b += 2*(a-(a/1000));
    a *= 1000;
    if(n<a){
        cout<<(n-(a/1000)+1)*3+b<<endl;
        return 0;
    }
    b += 3*(a-(a/1000));
    a *= 1000;
    if(n<a){
        cout<<(n-(a/1000)+1)*4+b<<endl;
        return 0;
    }
    b += 4*(a-(a/1000));
    a *= 1000;
    if(n<a){
        cout<<(n-(a/1000)+1)*5+b<<endl;
        return 0;
    }
    b += 5*(a-(a/1000));
    return 0;
}