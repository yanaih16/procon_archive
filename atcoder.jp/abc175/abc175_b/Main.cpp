#include<bits/stdc++.h>

using namespace std;
using i64 = long long;

int main(){
    i64 n,ans{};
    cin>>n;
    vector<int> a(n);
    for(i64 i=0;i<n;i++){
        cin>>a[i];
    }
    for(i64 i=0;i<n-2;i++){
        for(i64 j=i+1;j<n-1;j++){
            for(i64 k=j+1;k<n;k++){
                if(a[i]!=a[j]&&a[j]!=a[k]&&a[i]!=a[k]){
                    if(a[i]+a[j]>a[k]&&a[i]+a[k]>a[j]&&a[k]+a[j]>a[i]) ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}