#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main()
{
    int n;
    double ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        double a;
        cin>>a;
        ans += 1/a;
    }
    cout<<1/ans<<endl;
    return 0;
}