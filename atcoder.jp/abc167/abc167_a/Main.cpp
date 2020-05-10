#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main()
{
    string s,t;
    cin>>s>>t;
    i64 n=s.size();
    for(i64 i=0;i<n;i++){
        if(s[i]!=t[i]){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
