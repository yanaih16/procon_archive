#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int a,b;
    cin >>a>>b;
    if(a<6) cout <<0<<endl;
    else cout <<(a>12 ? b:b/2)<<endl;

    return 0;
}