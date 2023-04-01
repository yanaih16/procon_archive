#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n;
    string s;
    cin>>n>>s;
    for(i64 i = 1; i < n; i++){
        if(s[i-1] == s[i]){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;

    return 0;
}
