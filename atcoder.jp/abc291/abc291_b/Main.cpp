#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n;
    cin>>n;
    vector<i64> a(n * 5);
    for(i64 i = 0; i < 5 * n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    double sum = 0;
    for(i64 i = n; i < n*4; i++){
        sum += a[i];
    }
    cout<<sum/(n*3)<<endl;
    return 0;
}
