#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int a,b,c=1;
    cin>>a>>b;
    int ansa=a,ansb=b;
    while(c!=0){
        c=a%b;
        a=b;
        b=c;
    }
    cout<<ansa/a<<":"<<ansb/a<<endl;
    return 0;
}