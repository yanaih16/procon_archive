#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int w,h,x,y;
    cin>>w>>h>>x>>y;
    cout<<fixed << setprecision(10) << (double)w * h / 2<<" "<<(x*2==w&&y*2==h?1:0)<<endl;
    return 0;
}