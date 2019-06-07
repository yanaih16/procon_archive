#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    vector<int> a(3);
    for(int i=0;i<3;i++)cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    cout<<(a[0]*10+a[1])+a[2]<<endl;

    return 0;
}