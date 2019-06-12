#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    vector<int> a(3);
    cin>>a[0]>>a[1]>>a[2];
    sort(a.begin(),a.end());
    cout<<a[0]+a[1]<<endl;
    return 0;
}