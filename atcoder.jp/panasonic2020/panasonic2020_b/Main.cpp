#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 w,h;
    cin>>w>>h;
    if(w==1||h==1){
        cout<<1<<endl;
        return 0;
    }
    cout<<(w*h+1)/2<<endl;
    return 0;
}
