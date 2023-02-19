#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, k;
    cin >> n >> k;
    set<i64> a;
    for (i64 i = 0; i < n; i++) {
        i64 b;
        cin >> b;
        a.insert(b);
    }
    auto itr = a.begin();  // 最初の要素へのイテレータを取得
    for (i64 i = 0; i < a.size() && i < k; i++) {
        if (*itr != i) {
            cout << i << endl;
            return 0;
        }
        itr++;
    }
    cout << (a.size() < k ? a.size() : k) << endl;
    return 0;
}
