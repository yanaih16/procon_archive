#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    string s;
    cin>>s;
    for(i64 i = 0; i < s.size(); i++){
        if('A' <= s[i] && s[i] <= 'Z'){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}
