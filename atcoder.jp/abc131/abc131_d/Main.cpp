#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int n,t=0;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++)
        cin>>a[i][1]>>a[i][0];
    sort((pair<int,int>*)a[0], (pair<int,int>*)a[n], []( pair<int,int> x, pair<int,int> y ) { return x.first < y.first; });
    for(int i=0;i<n;i++){
        t += a[i][1];
        if(t>a[i][0]){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}