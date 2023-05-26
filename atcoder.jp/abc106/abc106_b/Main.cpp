#include <bits/stdc++.h>
#define rep(i, n) for (i64 i = 0; i < (n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (n); i++)
using namespace std;
using i64 = long long;

void Main() {
    i64 n;
    cin >> n;
    i64 ans = 0;
    rep2(i, 1, n + 1) {
        i64 count=0;
        rep2(j, 1, i + 1) {
            if(i % j == 0) count++;
        }
        if(i % 2 == 1 && count == 8){
            ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(15);
    Main();
    return 0;
}
