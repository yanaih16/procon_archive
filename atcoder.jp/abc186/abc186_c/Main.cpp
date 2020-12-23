#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,ans{};
    cin>>n;
    for(i64 i=1;i<=n;i++){
        i64 a=i;
        bool s=true;
        while(a){
            if(a%10==7){
                s = false;
                break;
            } 
            a /= 10;
        }   
        a = i;
        while(a){
            if(a%8==7){
                s = false;
                break;
            } 
            a /= 8;
        }   
        if(s) ans++;
    }
    cout<<ans<<endl;
    return 0;
}