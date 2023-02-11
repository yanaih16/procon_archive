#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

string binary(i64 a){
    string s = "0000000000\0";
    i64 i = 0;
    while(a){
        i64 b = a % 2;
        s[i] = '0' + b;
        a /= 2;
        i++;
    }
    return s;
}

int main() {
    i64 n, m;
    i64 count = 0;
    cin>>n>>m;
    bool check[11] ={false};
    vector<vector<i64>> a(m, vector<i64>(11));
    for(i64 i = 0; i < m; i++){
        i64 c;
        cin>>c;
        for(i64 j = 0; j < c; j++){
            i64 b;
            cin>>b;
            a[i][b] = 1;
        }
    }

    for(i64 i = 1; i < pow(2, m); i++){
        string s = binary(i);
        for(i64 j = 0; j < m; j++){
            if(s[j] == '0') continue;
            else{
                for(i64 k = 0; k < a[j].size(); k++){
                    if(a[j][k] == 1) check[k] = true;
                }
            }
        }
        bool f = true;
        for(i64 j = 1; j <= n; j++){
            if(!check[j]) f = false;
            check[j] = false;
        }
        if(f) count++;

    }

    cout<<count<<endl;

    return 0;
}
