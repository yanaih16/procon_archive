#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    string s;
    cin>>s;
    vector<i64> a(26,0);

    for(i64 i = 0; i < s.size(); i++){
        a[s[i] - 'a']++;
    }
    for(i64 i = 0 ; i < 26; i++){
        if(a[i] == 1){
            cout<<(char)('a' + i)<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
