#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 w,h;
    cin>>h>>w;
    i64 a[h][w];
    for(i64 i=0;i<h;i++){
        for(i64 j=0;j<w;j++) cin>>a[i][j];
    }

    for(i64 i=0;i<w;i++){
        for(i64 j=0;j<h;j++) cout<<a[j][i]<<" ";

        cout<<endl;
    }

    return 0;
}