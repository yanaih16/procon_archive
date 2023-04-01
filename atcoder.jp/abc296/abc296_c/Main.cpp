#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, x;
    cin>>n>>x;
    set<i64> a;
    for(i64 i = 0; i < n; i++){
        i64 x;
        cin>>x;
        a.insert(x);
    }
    for(auto e : a){
        auto itr = a.find(e + x);
        if(itr != a.end()){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
