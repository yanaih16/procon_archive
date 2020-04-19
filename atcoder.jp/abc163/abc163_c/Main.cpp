#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n;
    cin>>n;
    vector<i64> a(n);
    for(int i=1;i<n;i++){
        int b;
        cin>>b;
        a[b-1]++;
    } 
    for(int i=0;i<n;i++) cout<<a[i]<<endl;
    return 0;
}
