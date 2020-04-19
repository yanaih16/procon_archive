#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,m,sum=0,a;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a;
        sum+=a;
    }
    cout<<(sum>n?-1:n-sum)<<endl;
    return 0;
}
