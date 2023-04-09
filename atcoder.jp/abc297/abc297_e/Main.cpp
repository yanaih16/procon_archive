#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n, k;
    cin>>n>>k;
    vector<i64> a(n);
    set<i64> st;
    for(i64 i = 0; i < n; i++){
        cin>>a[i];
        st.insert(a[i]);
    }
    for(i64 i = 0; i < k - 1; i++){
        i64 min = *(st.begin());
        for(i64 i = 0; i < n; i++){
            st.insert(min + a[i]);
        }
        st.erase(st.begin());
    }
    cout<<*(st.begin())<<endl;
    return 0;
}
