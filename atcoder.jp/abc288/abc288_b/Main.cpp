#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, k;
    cin>> n >> k;
    vector<string> s(k);
    for(i64 i = 0; i < n; i++){
        string a;
        cin>>a;
        if(i < k) s[i] = a;
    }
    sort(s.begin(), s.end());

    for(i64 i = 0; i < k; i++){
        cout<<s[i]<<endl;
    }

    return 0;
}