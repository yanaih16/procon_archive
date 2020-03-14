#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 ans[32]={1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51};
    i64 a;
    cin>>a;
    cout<<ans[a-1]<<endl;
    return 0;
}