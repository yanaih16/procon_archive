#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n;
    cin>>n;
    for(i64 i = 0; i < n; i++){
        i64 a;
        cin>>a;
        if(a % 2 == 0) cout<<a<<" ";
    }
    cout<<endl;
    
    return 0;
}
