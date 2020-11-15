#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    double sx,sy,gx,gy;
    cin>>sx>>sy>>gx>>gy;
    cout << fixed << setprecision(8) <<sx+(gx-sx)/(sy+gy)*sy<<endl;
    return 0;
}