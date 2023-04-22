#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, t;
    cin >> n >> t;
    vector<i64> c(n), r(n);
    for (i64 i = 0; i < n; i++) {
        cin >> c[i];
    }
    for (i64 i = 0; i < n; i++) {
        cin >> r[i];
    }
    i64 col = c[0];
    for(i64 i = 1; i < n; i++){
        if(c[i] == t) col = t;
    }
    i64 max = 0, num = 0;
    for(i64 i = 0; i < n; i++){
        if(c[i] == col){
            if(r[i] > max) {
                max = r[i];
                num = i;
            }
        }

    }
    cout << num + 1 << endl;
    return 0;
}
