#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, m, d;
    cin >> n >> m >> d;
    vector<i64> a(n), b(m);
    for(i64 i = 0; i < n; i++) cin >> a[i];
    for(i64 i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(i64 i = n-1, j = m-1; i >= 0 && j >= 0;){
        if(abs(a[i] - b[j]) <= d){
            cout << a[i] + b[j] << endl;
            return 0;
        } else if (a[i] > b[j]) {
            i--;
        } else {
            j--;
        }
    }
    cout << -1 << endl;
    

    return 0;
}
