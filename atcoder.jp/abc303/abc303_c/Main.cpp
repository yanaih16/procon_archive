#include <bits/stdc++.h>
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
using namespace std;
using i64 = long long;
typedef pair<i64, i64> P;

void Main() {
    i64 n, m, h, k;
    string s;
    cin >> n >> m >> h >> k;
    cin >> s;
    set<P> a;
    rep(i, m) {
        i64 x, y;
        cin >> x >> y;
        a.insert(make_pair(x, y));
    }
    P c = {0, 0};

    for (auto v : s) {
        if (v == 'R')
            c.first++;
        else if (v == 'L')
            c.first--;
        else if (v == 'U')
            c.second++;
        else if (v == 'D')
            c.second--;
        h--;
        if(h < 0){
            cout << "No" << endl;
            return;
        } else if (a.find(c) != a.end() && h < k) {
            a.erase(c);
            h = k;
        }
    }
    cout << "Yes" << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
