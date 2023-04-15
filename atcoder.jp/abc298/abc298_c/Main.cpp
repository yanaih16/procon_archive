#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, q;
    cin >> n >> q;
    vector<vector<i64>> box(n + 1);
    vector<set<i64>> card(200001);
    for (i64 i = 0; i < q; i++) {
        i64 a;
        cin >> a;
        if (a == 1) {
            i64 x, y;
            cin >> x >> y;
            box[y].push_back(x);
            card[x].insert(y);
        } else if (a == 2) {
            i64 x;
            cin >> x;
            sort(box[x].begin(), box[x].end());
            for (i64 j = 0; j < box[x].size(); j++) {
                cout << box[x][j] << " ";
            }
            cout<<endl;
        } else if (a == 3) {
            i64 x;
            cin >> x;
            for (auto y : card[x]) {
                cout << y << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
