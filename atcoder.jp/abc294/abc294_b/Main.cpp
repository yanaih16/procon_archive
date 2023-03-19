#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 h, w;
    cin>>h>>w;
    for(i64 i = 0; i < h; i++){
        for(i64 j = 0; j < w; j++){
            int a;
            cin>>a;
            if(a == 0) cout<<'.';
            else cout<<(char)('A' + a - 1);
        }
        cout<<endl;
    }
    
    return 0;
}
