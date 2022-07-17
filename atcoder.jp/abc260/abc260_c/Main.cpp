#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, x, y;
    cin>>n>>x>>y;
    vector<vector<i64>> j(n, vector<i64>(2,0));
    j[n-1][0] = 1;
    for(i64 i = n-1; i >0; i--){
        j[i-1][0] += j[i][0];
        j[i][1] += j[i][0] * x;
        j[i-1][0] += j[i][1];
        j[i-1][1] += j[i][1] * y;
    }

    cout<<j[0][1]<<endl;


    return 0;
}
