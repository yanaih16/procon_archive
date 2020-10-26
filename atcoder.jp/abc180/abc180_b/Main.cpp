#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,m=0,t=0;
    double y=0;
    cin>>n;
    for(i64 i=0;i<n;i++){
        i64 a;
        cin>>a;
        if(a<0) a *= -1;
        m += a;
        y += (double)a*(double)a;
        t = (t<a?a:t);
    }
    cout<<m<<endl;
    cout<< fixed << setprecision(10)<<pow(y,0.5)<<endl;
    cout<<t<<endl;
    
    return 0;
}