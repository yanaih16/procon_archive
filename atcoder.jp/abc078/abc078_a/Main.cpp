#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    string x,y;
    cin>>x>>y;
    if(x<y) cout<<"<"<<endl;
    else if(x>y) cout<<">"<<endl;
    else cout<<"="<<endl;
    return 0;
}