#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    double x,y;
    cin>>x>>y;
    i64 r = x*x+y*y;
    double a = sqrt(r);
    cout<<x/a<<" "<<y/a<<endl;
    
    return 0;
}