#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n;
    string s;
    cin>>n>>s;
    i64 ans[n+1];
    i64 l=0,r=n;
    for(i64 i=0;i<=n;i++){
        if(s[i] == 'L'){
            ans[r] = i;
            r--;
        }
        else {
            ans[l] = i;
            l++;
        }
    }
    for(i64 i=0;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}