#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, q;
    cin >> n >> q;
    vector<set<i64>> e(n + 1);
    i64 ans = n;
    for (i64 i = 0; i < q; i++) {
        i64 query;
        cin >> query;
        if (query == 1) {
            i64 a, b;
            cin >> a >> b;
            if (e[a].size() == 0) ans--;
            if (e[b].size() == 0) ans--;
            e[a].insert(b);
            e[b].insert(a);
        } else {
            i64 a;
            cin >> a;
            if (e[a].size() != 0) {
                auto itr = e[a].begin();
                while (itr != e[a].end()) {
                    i64 p = *itr;
                    e[p].erase(a);
                    if (e[p].size() == 0) ans++;
                    itr++;
                }
                e[a].clear();
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
