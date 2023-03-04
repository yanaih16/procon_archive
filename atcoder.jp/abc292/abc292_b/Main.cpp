#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, q;
    cin>>n>>q;
    vector<i64> player(n+1, 0);
    for(i64 i = 0; i < q; i++){
        int a, x;
        cin>>a>>x;
        if(a == 1) player[x]++;
        else if(a == 2) player[x]+=2;
        else {
            if(player[x] >= 2) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }

    return 0;
}
