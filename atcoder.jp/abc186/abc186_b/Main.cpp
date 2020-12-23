#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 w,h,min=101,ans{};
    cin>>h>>w;
    i64 a[h][w];
    for(i64 i=0;i<h;i++){
        for(i64 j=0;j<w;j++){
            cin>>a[i][j];
            if(min>a[i][j]) min = a[i][j];
        }
    }
    for(i64 i=0;i<h;i++){
        for(i64 j=0;j<w;j++){
            ans += a[i][j]-min;
        }
    }
    cout<<ans<<endl;
    return 0;
}