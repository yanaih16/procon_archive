#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    string s[10];
    
    for(i64 i = 0;i < 10; i++){
        cin>>s[i];
    }
    i64 a=0,b=0,c=0,d=0;
    for(i64 i = 0; i < 10; i++){
        for(i64 j = 0; j < 10; j++){
            if(s[i][j] == '#'){
                if(a == 0){
                    a = i+1;
                    b = i+1;
                    c = j+1;
                    d = j+1;
                } else {
                    b = i + 1;
                    d = j + 1;   
                }
            }
        }
    }
    cout<<a<<" "<<b<<endl;
    cout<<c<<" "<<d<<endl;

    return 0;
}
