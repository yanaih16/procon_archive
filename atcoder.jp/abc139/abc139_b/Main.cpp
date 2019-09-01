#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 a,b;
    cin>>a>>b;
    cout<<((b-1)%(a-1)==0?(b-1)/(a-1):(b-1)/(a-1)+1)<<endl;
}
