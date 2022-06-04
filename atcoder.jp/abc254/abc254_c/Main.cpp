#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){

  i64 n, k;
  cin >> n >> k;
  vector<vector<i64>> a(k);
  vector<i64> b(n);
  for(i64 i=0;i<n;i++){
    cin>>b[i];
    a[i%k].push_back(b[i]);
  }
  for(i64 i=0;i<k;i++){
    sort(a[i].begin(),a[i].end());
  }
  sort(b.begin(),b.end());
  for(i64 i=0;i<n;i++){
    if(a[i%k][i/k]!=b[i]){
      cout<<"No"<<endl;
      return 0;
    }
  }
  cout<<"Yes"<<endl;
  

  return 0;
}
