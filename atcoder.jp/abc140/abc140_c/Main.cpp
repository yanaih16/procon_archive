#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int n,ans=0;
    cin>>n;
    vector<int> b(n);
    for(int i=0;i<n-1;i++) cin>>b[i];
    for(int i=0;i<n-2;i++){
        ans += min(b[i],b[i+1]);
    }
    ans += b[0]+b[n-2];
    cout<<ans<<endl;

    return 0;
}
