#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int n,b,c=0,ans=0;
    cin>>n>>b;
    for(int i=1;i<n;i++){
        int a;
        cin>>a;
        if(b>=a) c++;
        else {
            ans = max(ans,c);
            c = 0;
        }
        b = a;
    }
    cout<<max(ans,c)<<endl;
}
