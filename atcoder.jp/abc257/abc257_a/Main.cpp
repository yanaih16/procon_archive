#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
  i64 n, k;
  cin>>n>>k;
  string s;
  for(i64 i = 0; i < 26; i++){
    for(i64 j = 0; j < n; j++){
      s += 'A' + i;
    }
  }
  cout<<s[k-1]<<endl;

  return 0;
}
