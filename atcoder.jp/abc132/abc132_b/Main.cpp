#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int n,ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-2;i++){
        if(a[i]<a[i+1]&&a[i+1]<a[i+2]) ans++;
        else if(a[i]>a[i+1]&&a[i+1]>a[i+2]) ans++;
    }
    cout<<ans<<endl;
    return 0;
}