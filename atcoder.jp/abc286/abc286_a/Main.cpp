#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, p, q, r, s;
    cin>>n>>p>>q>>r>>s;
    vector<i64> a(n);
    for(i64 i = 0; i < n; i++) cin >> a[i];

    for(i64 i = 0; i < n; i++){
        if(p - 1 <= i && i < q){
            cout<<a[r + i - p];
        } else if(r - 1 <= i && i < s){
            cout<<a[i - r + p];
        }else {
            cout<<a[i];
        }
        cout<<" ";
    }
    cout<<endl;
    return 0;
}