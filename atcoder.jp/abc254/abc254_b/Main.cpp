#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main()
{
  i64 n;
  cin >> n;

  vector<vector<i64>> a(n, vector<i64>(n + 1));

  for (i64 i = 0; i < n; i++){
    for (i64 j = 0; j < i + 1; j++){
      if (j == 0 || j == i){
        a[i][j] = 1;
        cout<<1<<" ";
      }else{
        a[i][j] = a[i-1][j-1] + a[i-1][j];
        cout<<a[i][j]<<" ";
      }
    }
    cout<<endl;
  }


  return 0;
}
