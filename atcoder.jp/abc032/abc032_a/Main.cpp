#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int a,b,c,n;
    cin>>a>>b>>n;
    c = a*b;
    if(a<b){
        int tmp=a;
        a=b;
        b=tmp;
    }
    int r=a%b;
    while(r!=0){
        a = b;
        b = r;
        r = a%b;
    }
    c =c/ b;
    int t=1;
    while(c*t<n) t++;
    cout<<c*t<<endl;
    return 0;
}
