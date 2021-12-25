#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    string n;
    i64 sum=0,kuri=0;
    cin>>n;
    i64 keta = n.size();
    string ans = n+'0';
    for(i64 i=0;i<keta;i++){
        sum += n[i] - '0';
    }
    for(i64 i=0;i<keta;i++){
        char suu = (sum+kuri)%10 + '0';
        ans[i] = suu;
        kuri = (sum+kuri)/10;
        sum -= (n[keta-i-1]-'0');
    }
    if(kuri != 0){
        ans[keta] = kuri + '0';
        keta++;
    }
    for(i64 i=keta-1;i>=0;i--){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}