#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 h, w;
    cin >> h >> w;
    string an = "snuke";
    vector<string> a(h);
    for (i64 i = 0; i < h; i++) {
        cin >> a[i];
    }
    for (i64 i = 0; i < h; i++) {
        for (i64 j = 0; j < w; j++) {
            i64 dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
            i64 dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
            bool f = false;
            for (i64 k = 0; k < 8; k++) {
                for (i64 l = 0; l < 5; l++) {
                    if (0 <= i + l * dy[k] && i + l * dy[k] < h && 0 <= j + l * dx[k] && j + l * dx[k] < w && a[i + l * dy[k]][j + l * dx[k]] == an[l]) {
                        f = true;
                    } else {
                        f = false;
                        break;
                    }
                }
                if (f) {
                    for (i64 l = 0; l < 5; l++) {
                        cout << i + l * dy[k] + 1 << " " << j + l * dx[k] + 1 << endl;
                    }
                    return 0;
                }
            }
        }
    }
    return 0;
}
