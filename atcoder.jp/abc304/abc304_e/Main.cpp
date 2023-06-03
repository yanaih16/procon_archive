#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
#define fi first
#define se second
#define MOD 998244353
typedef pair<i64, i64> P;

#define MAX_N 200001

i64 par[MAX_N];
i64 urank[MAX_N];

void init(i64 n) {
    rep(i, n){
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
        par[x]  =y;
    } else {
        par[y] = x;
        if(urank[x] == urank[y]) urank[x]++;
    }
}

bool same(i64 x, i64 y){
    return find(x) == find(y);
}


void Main() {
    i64 n, m, k, q;
    set<P> c;
    cin >> n >> m;
    init(n);
    rep(i, m){
        i64 a, b;
        cin >> a >> b;
        unite(a, b);
    }
    cin >> k;
    rep(i, k){
        i64 a, b;
        cin >> a >> b;
        a = find(a);
        b = find(b);
        if(a > b) swap(a, b);
        c.insert(make_pair(a, b));
    }
    cin >> q;
    rep(i, q){
        i64 a, b;
        cin >> a >> b;
        a = find(a);
        b = find(b);
        if(a > b) swap(a, b);
        if(c.find(make_pair(a, b)) != c.end()) cout << "No" << endl;
        else cout << "Yes" << endl;
    }

}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
