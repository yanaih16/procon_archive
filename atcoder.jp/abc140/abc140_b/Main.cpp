#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int n,ans,z=30;
    ans = 0;
    cin>>n;
    vector<int> a(n),b(n),c(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n-1;i++) cin>>c[i];;
    for(int i=0;i<n;i++){
        int j = a[i]-1;
        ans += b[j];
        if(j == z+1) ans += c[z];
        z = j;
    }
    cout<<ans<<endl;
    return 0;
}
