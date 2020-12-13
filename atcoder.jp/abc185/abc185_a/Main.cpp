#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    i64 a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<min(a,min(b,min(c,d)))<<endl;
    return 0;
}