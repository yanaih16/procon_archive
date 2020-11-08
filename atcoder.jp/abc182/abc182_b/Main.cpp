#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,ans=1,gcd=0,max=0;
    cin>>n;
    vector<i64> a(n);
    for(i64 i=0;i<n;i++) cin>>a[i];
    for(i64 i=2;i<=1000;i++){
        for(i64 j=0;j<n;j++){
            if(a[j]>=i&&a[j]%i==0) gcd++;
        }
        if(max<=gcd){
            max = gcd;
            ans = i;
        }
        gcd=0;
    }
    cout<<ans<<endl;
    return 0;
}