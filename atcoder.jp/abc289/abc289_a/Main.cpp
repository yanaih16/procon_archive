#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    string s;
    cin>>s;
    for(i64 i = 0; i < s.size(); i++){
        if(s[i] == '0') cout<<1;
        else cout<<0;
    }
    cout<<endl;
    return 0;
}
