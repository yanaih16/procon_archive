#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 h, w;
    cin >> h >> w;
    vector<vector<char>> a(h + 2, vector<char>(w + 2, '.'));
    for (i64 i = 1; i <= h; i++) {
        for (i64 j = 1; j <= w; j++) {
            cin >> a[i][j];
        }
    }
    vector<i64> ans(min(h, w) + 1);
    for (i64 i = 1; i <= h; i++) {
        for (i64 j = 1; j <= w; j++) {
            i64 c = 1;
            if(a[i][j] != '#'){
                continue;
            }
            while (1) {
                if (a[i + c][j - c] == '#' && a[i - c][j + c] == '#' && a[i + c][j + c] == '#' && a[i - c][j - c] == '#') {

                } else {
                    break;
                }
                c++;
            }
            ans[c - 1]++;
        }
    }
    for(int i = 1; i < min(h, w) + 1; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
