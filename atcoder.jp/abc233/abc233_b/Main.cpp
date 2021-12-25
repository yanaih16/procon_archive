#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 l,r;
    string s;
    cin>>l>>r>>s;
    i64 b = (r-l+1)/2;
    for(i64 i=0;i<b;i++){
        char a;
        a = s[l-1];
        s[l-1] = s[r-1];
        s[r-1] = a;
        l++;
        r--;
    }
    cout<<s<<endl;
    return 0;
}