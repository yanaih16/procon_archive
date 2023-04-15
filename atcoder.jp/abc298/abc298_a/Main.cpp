#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n;
    string s;
    cin>>n>>s;
    bool a = false, b = false;
    for(i64 i = 0; i < n; i++){
        if(s[i] == 'o') a = true;
        if(s[i] == 'x') b = true;
    }
    if(a && !b) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
