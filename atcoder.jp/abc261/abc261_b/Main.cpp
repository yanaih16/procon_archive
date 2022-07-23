#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n;
    cin>>n;
    vector<string> a(n);
    for(i64 i = 0; i < n; i++) {
        cin>>a[i];
    }

    for(i64 i = 0; i < n; i++){
        for(i64 j = 1 + i; j < n; j++){
            if(a[i][j] == 'W'){
                if(a[j][i] != 'L'){
                    cout<<"incorrect"<<endl;
                    return 0;
                }
            } else if(a[i][j] == 'L'){
                if(a[j][i] != 'W'){
                    cout<<"incorrect"<<endl;
                    return 0;
                }
            } else if(a[i][j] == 'D'){
                if(a[j][i] != 'D'){
                    cout<<"incorrect"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"correct"<<endl;
    return 0;
}
