#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, m;
    cin>>n>>m;
    vector<i64> a(n), b(m), c(n + m);
    for(i64 i = 0; i < n; i++){
        cin>>a[i];
        c[i] = a[i];
    }
    for(i64 i = 0; i < m; i++){
        cin>>b[i];
        c[i + n] = b[i];
    }
    sort(c.begin(), c.end());

    for(i64 i = 0, j = 0; i < m + n || j < n; i++){
        if(c[i] == a[j]){
            cout<<i+1<<" ";
            j++;
        }
    }
    cout<<endl;
    for(i64 i = 0, j = 0; i < m + n || j < m; i++){
        if(c[i] == b[j]){
            cout<<i+1<<" ";
            j++;
        }
    }
    cout<<endl;
    return 0;
}
