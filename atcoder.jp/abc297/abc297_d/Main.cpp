#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 a, b;
    i64 ans = 0;
    cin>>a>>b;
    if(a < b) swap(a, b);
    while(b != 0){
        i64 c = a % b;
        ans += a / b;
        a = b;
        b = c;
    }
    cout<<ans - 1 <<endl;
    return 0;
}
