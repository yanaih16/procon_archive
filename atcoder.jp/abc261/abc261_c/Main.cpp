#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n;
    cin>>n;
    map<string, i64> mp;
    set<string> se;
    for(i64 i = 0; i < n; i++){
        string s;
        cin>>s;
        if(mp[s] == 0){
            cout<<s<<endl;
            mp[s]++;
        } else {
            cout<<s<<"("<<mp[s]<<")"<<endl;
            mp[s]++;
        }
        
    }
    return 0;
}
