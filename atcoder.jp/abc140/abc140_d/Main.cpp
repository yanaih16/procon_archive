#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int n,k,m=0,d=0;
    string s;
    cin>>n>>k>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]) m++;
        else d++;
    }
    for(int i=0;i<k;i++){
        if(d == 1) {
            m += d;
            break;
        }
        else if(d == 2){
            m += d;
            break;
        } 
        else if(d == 0){
            break;
        }
        else {
            m += 2;
            d -= 2;
        }
    }
    cout<<m<<endl;


    return 0;
}
