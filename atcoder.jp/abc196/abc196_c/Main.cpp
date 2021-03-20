#include<bits/stdc++.h> 
using namespace std;
using i64 = long long;

int main(){
    i64 n,a=1,b,ans{};
    cin>>n;
    while(1){
        i64 c = (int)log10((double)a) + 1;
        b = a+(a*pow(10,c));
        if(n<b) break;

        ans++;
        a++;
    }
    cout<<ans<<endl;
    return 0;
}