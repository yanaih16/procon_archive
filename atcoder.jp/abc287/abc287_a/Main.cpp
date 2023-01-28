#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    int n;
    int ye=0, no=0;
    cin>>n;
    for(i64 i = 0; i < n; i++){
        string s;
        cin>>s;
        if(s == "For") ye ++;
        else no++;
    }
    cout<<(no > ye ? "No": "Yes")<<endl;
    return 0;
}