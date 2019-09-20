#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int n,k,q;
    cin>>n>>k>>q;
    int sanka[n];
    for(int i=0;i<n;i++) sanka[i]=k-q;
    for(int i=0;i<q;i++){
        int a;
        cin>>a;
        sanka[a-1]++;
    }
    for(int i=0;i<n;i++){
        cout<<(sanka[i]<=0?"No":"Yes")<<endl;
    }
    
    return 0;
}
