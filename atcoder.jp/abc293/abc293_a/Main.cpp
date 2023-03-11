#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    string s;
    cin>>s;
    for(i64 i = 0; i < s.size(); i++){
        if(i % 2 == 0) cout<<s[i+1];
        else cout<<s[i-1];
    }
    cout<<endl;
    return 0;
}
