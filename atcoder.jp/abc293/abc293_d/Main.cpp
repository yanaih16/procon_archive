#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

i64 par[200001];
i64 urank[200001];

void init(i64 n){
    for(i64 i = 1; i <= n; i++){
        par[i] = i;
        urank[i] = 0;
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

    if(urank[x] < urank[y]){
        par[x] = y;
    } else {
        par[y] = x;
        if(urank[x] == urank[y]) urank[x]++;
    }
}

bool same(i64 x, i64 y){
    return find(x) == find(y);
}

int main() {
    i64 n, m;
    i64 count=0;
    cin>>n>>m;
    init(n+1);
    for(i64 i = 0; i < m; i++){
        i64 a, b;
        char c, d;
        cin>>a>>c>>b>>d;
        if(same(a, b)) count++;
        else unite(a, b);
    }
    set<i64> a;
    for(i64 i = 1; i <= n; i++){
        a.insert(find(i));
    }
    cout<<count<<" "<<a.size() - count<<endl;
    return 0;
}
