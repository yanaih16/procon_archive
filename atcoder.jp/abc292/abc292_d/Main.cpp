#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

struct edge{
    i64 to;
};

vector<edge> G[200001];

i64 par[200001];
i64 urank[200001];

void init(i64 n){
    for(i64 i = 0; i < n; i++){
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
    cin>>n>>m;
    init(n);
    for(i64 i = 0; i < m; i++){
        i64 a, b;
        cin>>a>>b;
        unite(a, b);
        edge e;
        e.to = b;
        G[a].push_back(e);
        e.to = a;
        G[b].push_back(e);
    }
    vector<i64> e(n+1, 0), v(n+1, 0);
    for(i64 i = 1; i <= n; i++){
        i64 a = find(i);
        v[a]++;
        e[a] += G[i].size();
    }
    for(i64 i = 0; i < n; i++){
        if(v[i] != e[i]/2){
            cout<<"No"<<endl;
            return 0;
        } 
    }
    cout<<"Yes"<<endl;
    return 0;
}
