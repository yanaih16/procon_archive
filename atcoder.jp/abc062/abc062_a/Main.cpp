#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int a[13]={0,1,3,1,2,1,2,1,1,2,1,2,1};
    int x,y;
    cin>>x>>y;
    cout<<(a[x]==a[y]?"Yes":"No")<<endl;
    return 0;
}