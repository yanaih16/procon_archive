#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 h,n,sum=0;
    cin>>h>>n;
    for(i64 i=0;i<n;i++){
        int a;
        cin>>a;
        sum+=a;
    }
    cout<<(sum<h?"No":"Yes")<<endl;
    return 0;
}