#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, m;
    cin>>n>>m;
    if(n >= m){
        cout<<m<<endl;
        return 0;
    } 
    if(m / n > n || (m / n >= n && m % n != 0)) {
        cout<<-1<<endl;
        return 0;
    } else if(m % n == 0){
        cout<<m<<endl;
        return 0;
    }
    i64 a = sqrt(m) + 1;
    i64 min = LONG_LONG_MAX;
    for(i64 i = 2; i <= a; i++){
        i64 b = (m + i - 1) / i;
        if(b > n) continue;
        i64 c = i * b - m;
        if( min > c) min = c;
    }
    cout<<m + min<<endl;
    return 0;
}
