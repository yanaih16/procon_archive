#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int a,b;
    cin>>a>>b;
    if(abs(a-b)>=2)cout <<(a<b?b*2-1:a*2-1);
    else cout<<a+b<<endl;

    return 0;
}