#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 h, w;
    cin >> h >> w;
    vector<string> a(h), b(h);
    for (i64 i = 0; i < h; i++) {
        cin >> a[i];
    }
    for (i64 i = 0; i < h; i++) {
        cin >> b[i];
    }
    for (i64 s = 0; s < h; s++) {
        for (i64 t = 0; t < w; t++) {
            vector<string> aa = a;
            for (i64 i = 0; i < h; i++) {
                for (i64 j = 0; j < w; j++) {
                    aa[(i + s) % h][(j + t) % w] = a[i][j];
                }
            }
            bool f = true;
            for (i64 i = 0; i < h; i++) {
                for (i64 j = 0; j < w; j++) {
                    if (aa[i][j] != b[i][j]) {
                        f = false;
                        break;
                    }
                }
                if (!f) break;
            }
            if (f) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
