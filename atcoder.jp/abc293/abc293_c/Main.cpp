#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 h, w;
    i64 a[11][11];

    cin >> h >> w;
    for (i64 i = 1; i <= h; i++) {
        for (i64 j = 1; j <= w; j++) cin >> a[j][i];
    }

    i64 p[20], l = h + w - 2, ans = 0;
    for (int i = 1; i <= l; i++) {
        if (i > w - 1)
            p[i] = 1;
        else
            p[i] = 0;
    }

    do {
        i64 x = 1, y = 1;
        set<i64> s;
        s.insert(a[1][1]);
        for (i64 i = 1; i <= l; i++) {
            if (p[i])
                y++;
            else
                x++;
            s.insert(a[x][y]);
        }
        if (s.size() == l + 1) ans++;
    } while (next_permutation(p + 1, p + l + 1));

    cout << ans << endl;
    return 0;
}
