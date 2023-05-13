#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define MOD 998244353

int main() {
    i64 n;
    cin >> n;
    vector<i64> a(n);
    for(i64 i = 0; i < n; i++) cin >> a[i];
    for(i64 i = 0; i < n-1; i++){
        cout << a[i] << " ";
        if(abs(a[i] - a[i + 1]) != 1){
            if(a[i] < a[i + 1]){
                for(i64 j = a[i] + 1; j < a[i + 1]; j++){
                    cout << j << " ";
                }
            }else {
                for(i64 j = a[i] - 1; j > a[i + 1]; j--){
                    cout << j << " ";
                }
            }
        }
    }
    cout << a[n-1] << endl;;
    return 0;
}
