#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int a,b,ans;
    cin>>a>>b;
    ans = a+b;
    ans = max(ans,a-b);
    cout<<max(ans,a*b)<<endl;
    return 0;
}