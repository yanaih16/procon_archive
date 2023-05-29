#include <bits/stdc++.h>
#define rep(i, n) for (i64 i = 0; i < (i64)(n); i++)
#define rep2(i, a, n) for (i64 i = (a); i < (i64)(n); i++)
using namespace std;
using i64 = long long;
typedef pair<i64, i64> P;

void Main() {
    i64 n;
    cin >> n;
    vector<P> a(n);
    vector<i64> b(n);
    rep(i, n){
        cin >> a[i].first >> a[i].second;
        b[i] = i;
    }
    double ans = 0;
    i64 cou = 0;
    do{
        double tmp = 0;;
        rep(i, n - 1){
            double dx = (double)(a[b[i]].first - a[b[i + 1]].first);
            double dy = (double)(a[b[i]].second - a[b[i + 1]].second);
            tmp += sqrt(dx * dx + dy * dy);
        }
        ans += tmp;
        cou++;
    }while(next_permutation(b.begin(), b.end()));
    cout << ans / (double)cou << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
