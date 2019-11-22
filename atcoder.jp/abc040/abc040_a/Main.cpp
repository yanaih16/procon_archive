#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,x;
    cin>>n>>x;
    cout<<(x-1<n-x?x-1:n-x)<<endl;
    return 0;
}
