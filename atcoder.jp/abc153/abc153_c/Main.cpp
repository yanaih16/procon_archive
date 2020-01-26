#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,k,ans=0;
    cin>>n>>k;
    vector<i64> h(n);
    for(int i=0;i<n;i++) cin>>h[i];
    sort(h.begin(),h.end(), greater<int>());
    for(int i=k;i<n;i++){
        ans+=h[i];
    }
    cout<<ans<<endl;
    return 0;
}