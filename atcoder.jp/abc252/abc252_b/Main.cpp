#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
  i64 n,k;
  i64 max=0;
  cin>>n>>k;
  i64 a[n];
  for(i64 i=0;i<n;i++) cin>>a[i];
  for(i64 i=0;i<k;i++) {
    i64 b;
    cin >> b;
    if(max<a[b-1]) max = a[b-1];
  }

  sort(a,a+n,greater<i64>());
  
  if(a[0]==max) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
