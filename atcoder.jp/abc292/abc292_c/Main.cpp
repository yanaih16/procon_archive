#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n;
    i64 ans = 0;
    cin>>n;
    vector<i64> divisor(n+1, 1);
    for(i64 i = 2; i <= n; i++){
        i64 a = 1;
        while(i * a <= n){
            divisor[i * a]++;
            a++;
        }
    }
    for(i64 i = 1; i < n; i++){
        ans += divisor[i] * divisor[n-i];
    }
    cout<<ans<<endl;
    return 0;
}
