#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    int n;
    cin>>n;
    vector<int> a(n+1, 0);
    for(i64 i = 1; i <= n; i++){
        int b;
        cin>>b;
        if(a[i] == 0) a[b]++; 
    }
    i64 count = 0;
    for(i64 i = 1; i <= n; i++){
        if(a[i] == 0) count++;
    }
    cout<<count<<endl;
    for(i64 i = 1; i <= n; i++){
        if(a[i] == 0) cout<< i << " ";
    }
    cout<<endl;
    return 0;
}
