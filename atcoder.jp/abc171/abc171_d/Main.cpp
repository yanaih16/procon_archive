#include<bits/stdc++.h>

using namespace std;
using i64 = long long;

i64 table[100001];

int main(){
    i64 n,q,sum{};
    cin>>n;
    for(i64 i=0;i<n;i++){
        i64 a;
        cin>>a;
        sum+=a;
        table[a]++;
    }
    cin>>q;
    i64 ans[q];
    for(i64 i=0;i<q;i++){
        i64 b,c;
        cin>>b>>c;
        sum+=(c-b)*table[b];
        table[c]+=table[b];
        table[b]=0;
        ans[i]=sum;
    }
    for(i64 i=0;i<q;i++){cout<<ans[i]<<endl;}

    return 0;
}