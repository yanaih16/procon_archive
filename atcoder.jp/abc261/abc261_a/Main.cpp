#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(r1 <= l2) cout<<0<<endl;
    else if(l1 > r2) cout<<0<<endl;
    else {
        cout<<min(r1,r2)-max(l1,l2)<<endl;
    }

    return 0;
}
