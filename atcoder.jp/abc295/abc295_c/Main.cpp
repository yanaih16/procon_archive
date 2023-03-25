#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n;
    i64 ans = 0;
    cin>>n;
    vector<i64> sock(n);
    for(i64 i = 0; i < n; i++){
        cin>>sock[i];
    }
    sort(sock.begin(), sock.end());
    for(i64 i = 0; i < n; i++){
        if(sock[i] == sock[i+1]){
            ans++;
            i++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
