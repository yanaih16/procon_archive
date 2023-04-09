#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, d;
    cin >> n >> d;
    vector<i64> t(n);
    for(i64 i = 0; i < n; i++){
        cin>>t[i];
    }
    for(i64 i = 1; i < n; i++){
        if(t[i] - t[i - 1] <= d){
            cout<<t[i]<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;

    return 0;
}
