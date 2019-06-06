#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int H,W,h,w;
    cin >>H>>W>>h>>w;
    H-=h;
    W-=w;
    cout <<H*W<<endl;
    return 0;
}