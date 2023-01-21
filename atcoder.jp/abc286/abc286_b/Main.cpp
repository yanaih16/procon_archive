#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    int n;
    string s;
    cin>>n>>s;
    for(i64 i = 0; i < (i64)s.size() - 1; i++){
        cout<<s[i];
        if(s[i] == 'n' && s[i+1] == 'a') cout<<'y';
    }
    cout<<s[s.size()-1]<<endl;;

    return 0;
}