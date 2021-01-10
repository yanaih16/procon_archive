#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 n,sen=1;
    cin>>n;
    for(i64 i=0;i<n-1;i++){
        sen *= 2;
    }
    i64 am=0,an=0,bm=0,bn=0;
    for(i64 i=1;i<=sen;i++){
        i64 a;
        cin>>a;
        if(a>am){
            an = i;
            am = a;
        }
    }
    for(i64 i=1;i<=sen;i++){
        i64 a;
        cin>>a;
        if(a>bm){
            bn = i+sen;
            bm = a;
        }
    }
    cout<<(am<bm?an:bn)<<endl;
    return 0;
}