#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    string s;
    string a[7]={"SAT","FRI","THU","WED","TUE","MON","SUN"};
    cin>>s;
    for(i64 i=0;i<7;i++){
        if(s==a[i]) cout<<i+1<<endl; 
    }
    return 0;
}
