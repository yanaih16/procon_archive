#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int n;
    cin>>n;
    pair<string,int> k[n];
    for(i64 i=0;i<n;i++){
        bool f=true;
        string s;
        cin>>s;
        for(i64 j=0;j<i;j++){
            if(s == k[j].first){
                k[j].second ++;
                f = false;
                break;
            }
        }
        if(f){
            k[i].first = s;
            k[i].second = 1;
        }
    }
    string t;
    int max=0;
    for(i64 i=0;i<n;i++){
        if(k[i].second>max) {
            t = k[i].first;
            max = k[i].second;
        }
    }
    cout<<t<<endl;
    return 0;
}