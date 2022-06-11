#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
  i64 n, k;
  double max = 0;
  cin >> n >> k;
  vector<i64> a(k);
  vector<pair<double,double>> co(n);
  for(i64 i=0;i<k;i++) cin>>a[i];
  for(i64 i=0;i<n;i++){
    double x,y;
    cin>>x>>y;
    co[i] = make_pair(x,y);
  }
  for(i64 i=0;i<n;i++){
    double min = 1e10;
    for(i64 j=0;j<k;j++){
      double dx, dy, d;
      dx = co[a[j]-1].first - co[i].first;
      dy = co[a[j]-1].second - co[i].second;
      d = dx * dx + dy * dy;
      double r = sqrt(d);
      if(r < min) min = r;
    }
    if(min > max) max = min;
  }
  cout << std::setprecision(30) <<max<<endl;
  return 0;
}
