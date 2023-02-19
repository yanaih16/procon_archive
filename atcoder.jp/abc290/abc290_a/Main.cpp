#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, m;
    i64 ans = 0;
    cin>>n>>m;
    vector<i64> a(n);
    for(i64 i = 0; i < n; i++) cin>>a[i];
    for(i64 i = 0; i < m; i++){
        i64 b;
        cin>>b;
        ans += a[b - 1];
    }
    cout<<ans<<endl;
    return 0;
}
