#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int x,a,b;
    cin>>x>>a>>b;
    if(a>=b) cout<<"delicious"<<endl;
    else cout<<(b-a<=x?"safe":"dangerous")<<endl;
    return 0;
}