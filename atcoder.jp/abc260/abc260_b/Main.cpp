#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<i64> m(n), e(n);
    vector<bool> pf(n, false);
    for(i64 i = 0; i < n; i++){
        cin>>m[i];
    }
    for(i64 i = 0; i < n; i++){
        cin>>e[i];
    }

    for(i64 i = 0; i < x; i++){
        i64 max=-1, p;
        for(i64 j = 0; j < n; j++){
            if(!pf[j] && max<m[j]){
                max = m[j];
                p = j;
            }
        }
        pf[p] = true;
    }
    for(i64 i = 0; i < y; i++){
        i64 max=-1, p;
        for(i64 j = 0; j < n; j++){
            if(!pf[j] && max<e[j]){
                max = e[j];
                p = j;
            }
        }
        pf[p] = true;
    }
    for(i64 i = 0; i < z; i++){
        i64 max=-1, p;
        for(i64 j = 0; j < n; j++){
            if(!pf[j] && max<(m[j]+e[j])){
                max = m[j]+e[j];
                p = j;
            }
        }
        pf[p] = true;
    }

    for(i64 i = 0; i < n; i++){
        if(pf[i]) cout<<i+1<<endl;
    }

    return 0;
}
