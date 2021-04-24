#include<bits/stdc++.h> 
using namespace std;
using i64 = long long;

int main(){
    i64 n,q;
    string s,c[2];
    cin>>n>>s>>q;
    c[0] = s.substr(0,n);
    c[1] = s.substr(n);
    for(i64 i=0;i<q;i++){
        i64 t,a,b;
        cin>>t>>a>>b;
        if(t==1){
                if(a<=n&&b<=n) swap(c[0][a-1],c[0][b-1]);
                else if(a<=n) swap(c[0][a-1],c[1][b-n-1]);
                else swap(c[1][a-n-1],c[1][b-n-1]);
        }
        else {
            swap(c[0],c[1]);
        }
    }
    cout<<c[0]<<c[1]<<endl;

    return 0;
}