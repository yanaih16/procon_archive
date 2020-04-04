#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 x,k;
    cin>>x>>k;
    i64 a=x%k;
    cout<<(a<k-a?a:k-a);

    return 0;
}
