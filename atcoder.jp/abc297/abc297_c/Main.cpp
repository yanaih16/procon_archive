#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (i64 i = 0; i < h; i++) cin >> s[i];
    for(i64 i = 0; i < h; i++){
        for(i64 j = 0; j < w-1; j++){
            if(s[i][j] == 'T' && s[i][j + 1] == 'T'){
                s[i][j] = 'P';
                s[i][j + 1] = 'C';
            }
        }
    }
    for (i64 i = 0; i < h; i++) cout << s[i] << endl;;
    return 0;
}
