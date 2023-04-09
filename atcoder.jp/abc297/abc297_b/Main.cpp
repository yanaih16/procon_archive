#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    string s;
    cin>>s;
    i64 b[2] = {}, r[2] = {}, k = 0;
    for(i64 i = 0; i < 8; i++){
        if(s[i] == 'K') k = i + 1;
        if(s[i] == 'B'){
            if(b[0] == 0) b[0] = i + 1;
            else b[1] = i + 1;
        }
        if(s[i] == 'R'){
            if(r[0] == 0) r[0] = i + 1;
            else r[1] = i + 1;
        }
    }
    if(r[0] < k && k < r[1]){
        if((b[0] + b[1]) % 2 != 0){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
