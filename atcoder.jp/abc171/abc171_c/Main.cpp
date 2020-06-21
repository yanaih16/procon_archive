#include<bits/stdc++.h>

using namespace std;
using i64 = long long;

int main(){
    string s;
    i64 n;
    cin>>n;
    while(n>26){
        i64 a=(n-1)%26;
        s+='a'+a;
        n=(n-1)/26;
    }
    i64 a=(n-1)%26;
        s+='a'+a;
        n/=26;
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    return 0;
}