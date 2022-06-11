#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
  int r,c;
  cin>>r>>c;
  vector<vector<int>> a(2,vector<int> (2));
  for(i64 i=0;i<2;i++){
    for(i64 j=0;j<2;j++) cin>>a[i][j];
  }
  cout<<a[r-1][c-1]<<endl;
  return 0;
}
