#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 x,y;
    cin>>x>>y;
    cout<<(x>=y?0:(y-x+9)/10)<<endl;
    return 0;
}