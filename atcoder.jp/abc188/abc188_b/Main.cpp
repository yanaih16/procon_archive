#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n;
    cin>>n;
    i64 a[n],b[n];
    for(i64 i=0;i<n;i++){
        cin>>a[i];
    }
    for(i64 i=0;i<n;i++){
        cin>>b[i];
    }
    i64 s{};
    for(i64 i=0;i<n;i++){
        s += a[i]*b[i];
    }
    cout<<(s==0?"Yes":"No")<<endl;
    return 0;
}