#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int x[3],y[3];
    for(i64 i=0;i<3;i++){
        cin>>x[i]>>y[i];
    }
    if(x[0]==x[1]) cout<<x[2]<<" ";
    else if(x[0]==x[2]) cout<<x[1]<<" ";
    else if(x[2]==x[1]) cout<<x[0]<<" ";

    if(y[0]==y[1]) cout<<y[2]<<endl;
    else if(y[0]==y[2]) cout<<y[1]<<endl;
    else if(y[2]==y[1]) cout<<y[0]<<endl;
    
    return 0;
}