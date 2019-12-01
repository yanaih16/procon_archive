#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n;
    cin>>n;
    i64 tei=n/1.08;
    i64 komi=tei*1.08,komi2=(tei+1)*1.08;
    if(komi==n) cout<<tei<<endl;
    else if(komi2==n)cout<<tei+1<<endl;
    else cout<<":("<<endl;
    return 0;
}