#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n;
    cin>>n;
    bool ans = false;
    for(i64 i = 0; i < n; i++){
        string s;
        cin>>s;
        if(s == "and" || s == "not" || s == "that" || s == "the" || s == "you"){
            ans = true;
        }
    }
    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
