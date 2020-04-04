#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,m,sum=0;
    cin>>n>>m;
    vector<int> a(n);
    for(i64 i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    i64 b=(sum+m*4-1)/(m*4);
    cout<<(a[m-1]<b?"No":"Yes")<<endl;

    return 0;
}
