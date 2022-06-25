#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
  i64 n, k, q;
  cin>> n >> k >> q;
  vector<i64> a(k);
  for(i64 i = 0; i < k; i++){
    cin>>a[i];
  }
  for(i64 i = 0; i < q; i++){
    i64 l;
    cin>>l;
    l--;
    if(l + 1 == k){
      if(a[l] != n) a[l]++;
    } else if(a[l] + 1 != a[l + 1]){
      a[l]++;
    }
  }
  for(i64 i = 0; i < k; i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  return 0;
}
