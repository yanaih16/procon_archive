#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int n,ans=0;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++) cin>>p[i];
    for(int i=0;i<n;i++){
        if(p[i]!=i+1) ans++;
    }
    cout<<(ans<=2?"YES":"NO");
    return 0;
}