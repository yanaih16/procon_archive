#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n;
    i64 a, b;
    cin >> n >> a >> b;
    i64 ans;
    for(i64 i = 0; i < n; i++){
        i64 c;
        cin >> c;
        if(c == a + b) ans = i + 1;
    }
    cout << ans << endl;
    
    return 0;
}
