#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    vector<int> a(3);
    for(int i=0;i<3;i++)cin>>a[i];
    sort(a.begin(),a.end());
    cout<<(a[1]-a[0])+(a[2]-a[1])<<endl;
    return 0;
}