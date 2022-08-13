#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    string a = "atcoder";
    string s;
    cin>>s;
    i64 ans = 0;
    for(i64 i = 0; i < 6; i++){
        for(i64 j = 0; j < 7-i; j++){
            if(s[j] == a[i]){
                ans += j;
                s.erase(j, 1);
                break;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}
