#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

#define MAX_V 200010
#define MAX_E 200000

i64 par[MAX_V];
i64 my_rank[MAX_V];

void init_union_find(i64 n){
    for(i64 i = 0; i < n; i++){
        par[i] = i;
        my_rank[i] = 0;
    }
}

i64 find(i64 x){
    if(par[x] == x){
        return x;
    } else {
        return par[x] = find(par[x]);
    }
}

void unite(i64 x, i64 y){
    x = find(x);
    y = find(y);
    if(x == y) return;

    if(my_rank[x] < my_rank[y]){
        par[x] = y;
    } else {
        par[y] = x;
        if(my_rank[x] == my_rank[y]) my_rank[x]++;
    }
}

bool same(i64 x, i64 y){
    return find(x) == find(y);
}

int main() {
    i64 n, m;
    i64 ans = 0;
    cin>>n>>m;
    init_union_find(n + 1);
    for(i64 i = 0; i < m; i++){
        i64 s, t;
        cin>>s>>t;
        if(same(s, t)){
            ans++;
        } else {
            unite(s, t);
        }
    }
    cout<<ans<<endl;
    return 0;
}
