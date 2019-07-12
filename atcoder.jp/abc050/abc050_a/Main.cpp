#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    int a,b;
    char p;
    cin>>a>>p>>b;
    switch(p){
        case '+': 
            cout<<a+b<<endl;
            return 0;
        case '-':
            cout<<a-b<<endl;
            return 0;
    }
}