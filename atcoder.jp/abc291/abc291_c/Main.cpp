#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    i64 n;
    string s;
    cin>>n>>s;
    vector<pair<i64, i64>> a;
    i64 x = 0, y = 0;
    a.push_back({x, y});
    for(i64 i = 0; i < n; i++){
        if(s[i] == 'R') x++;
        else if(s[i] == 'L')x--;
        else if(s[i] == 'U')y++;
        else if(s[i] == 'D')y--;
        a.push_back({x, y});
    }
    sort(a.begin(), a.end());
    for(i64 i = 0; i < n-1; i++){
        if(a[i] == a[i+1]){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
