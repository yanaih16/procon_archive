#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
typedef pair<i64, i64> P;

int main() {
    i64 r, c;
    cin>>r>>c;
    vector<vector<char>> b(r, vector<char>(c));
    for(i64 i = 0; i < r; i++){
        for(i64 j = 0; j < c; j++){
            cin>>b[i][j];
        }
    }
    for(i64 i = 0; i < r; i++){
        for(i64 j = 0; j < c; j++){
            if(b[i][j] != '#' && b[i][j] != '.'){
                i64 bom = b[i][j] - '0';
                for(i64 k = 0; k < r; k++){
                    for(i64 l = 0; l < c; l++){
                        if(abs(k-i) + abs(l-j) <= bom && b[k][l] == '#') b[k][l] = '.';
                    }
                }
                b[i][j] = '.';
            }
        }
    }
    for(i64 i = 0; i < r; i++){
        for(i64 j = 0; j < c; j++){
            cout<<b[i][j];
        }
        cout<<endl;
    }
    return 0;
}
