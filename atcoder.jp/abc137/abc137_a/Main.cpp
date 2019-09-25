#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 a,b;
    cin>>a>>b;
    cout<<max(max(a+b,a-b),a*b)<<endl;
    return 0;
}
