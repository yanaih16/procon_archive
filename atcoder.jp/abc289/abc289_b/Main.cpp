#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

i64 g[11];

i64 re(i64 a){
    i64 count = 0;
    if(g[a] == 0){
        cout<<a<<" ";
    }else{
        count = re(a + 1);
        cout<<a<<" ";
    }
    return count + 1;

}

int main() {
    i64 n, m;
    cin>>n>>m;
    vector<i64> a(m);
    for(i64 i = 0; i < n; i++){
        g[i] = 0;
    }
    for(i64 i = 0; i < m; i++){
        cin>>a[i];
        g[a[i]] = a[i] + 1;
    }
    for(i64 i = 1; i <= n;){
        i += re(i);
    }
    cout<<endl;

    return 0;
}
