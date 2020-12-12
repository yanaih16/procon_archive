#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 c;
    cin>>c;
    i64 map[50][50];
    for(i64 i=0;i<50;i++){
        for(i64 j=0;j<50;j++){
            cin>>map[i][j];
        }
    } 
    cout<<1200<<endl;
    for(i64 i=0;i<24;i++){
        for(i64 j=0;j<50;j++){
            cout<<i*2+1<<" "<<j<<endl;
        }
    }
    return 0;
}