#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, k;
    string s;
    cin>>n>>k>>s;
    string ans;
    for(i64 i = 0; i < n; i++){
        if(s[i] == 'o' && k > 0) {
            ans.push_back('o');
            k--;
        }
        else ans.push_back('x');
    }
    cout<<ans<<endl;
    return 0;
}
