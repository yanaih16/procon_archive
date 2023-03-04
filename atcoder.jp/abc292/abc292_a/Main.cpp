#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    string s;
    cin>>s;
    for(i64 i = 0; i < s.size(); i++){
        s[i] -= 32;
    }
    cout<<s<<endl;

    return 0;
}
