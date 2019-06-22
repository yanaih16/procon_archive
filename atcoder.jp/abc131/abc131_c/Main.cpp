#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 a,b,c,d,x,y,tmp;
    cin>>a>>b>>c>>d;
    x = b/c-(a-1)/c;
    y = b/d-(a-1)/d;
    i64 r = c*d;
    if(c<d){
        tmp = c;
        c = d;
        c = tmp;
    }
 
    i64 l = c % d;
    while(l!=0){
        c = d;
        d = l;
        l = c % d;
    }
    l = r/d;
    i64 z = b/l-(a-1)/l;

    cout<<b-a+1-(x+y-z)<<endl;

    return 0;
}