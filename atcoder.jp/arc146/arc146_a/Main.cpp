#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

unsigned GetDigit(unsigned num){
	return log10(num)+1;
}

int main() {
    i64 n;
    cin>>n;
    vector<i64> a(n);
    for(i64 i = 0; i < n; i++) cin>>a[i];

    sort(a.begin(), a.end());
    
    if(GetDigit(a[n-1]) == GetDigit(a[n-2]) && GetDigit(a[n-1]) == GetDigit(a[n-3])){
        string b1 = to_string(a[n-1]), b2 = to_string(a[n-2]) , b3 = to_string(a[n-3]);
            string max = b1 + b2 + b3;
            if(max < b1 + b3 + b2) max = b1 + b3 + b2;
            if(max < b2 + b1 + b3) max = b2 + b1 + b3;
            if(max < b2 + b3 + b1) max = b2 + b3 + b1;
            if(max < b3 + b1 + b3) max = b3 + b1 + b2;
            if(max < b3 + b2 + b1) max = b3 + b2 + b1;

            cout<<max<<endl;
    }else {
        i64 a1 = GetDigit(a[n-1]);
        i64 a2 = GetDigit(a[n-2]);
        i64 a3 = GetDigit(a[n-3]);
        if(a1+a2+a3 < 17){
            string b1 = to_string(a[n-1]), b2 = to_string(a[n-2]) , b3 = to_string(a[n-3]);
            string max = b1 + b2 + b3;
            if(max < b1 + b3 + b2) max = b1 + b3 + b2;
            if(max < b2 + b1 + b3) max = b2 + b1 + b3;
            if(max < b2 + b3 + b1) max = b2 + b3 + b1;
            if(max < b3 + b1 + b3) max = b3 + b1 + b2;
            if(max < b3 + b2 + b1) max = b3 + b2 + b1;

            cout<<max<<endl;
        }else {
            string b1 = to_string(a[n-1]), b2 = to_string(a[n-2]) , b3 = to_string(a[n-3]);
            string max = b1 + b2 + b3;
            if(max < b1 + b3 + b2) max = b1 + b3 + b2;
            if(max < b2 + b1 + b3) max = b2 + b1 + b3;
            if(max < b2 + b3 + b1) max = b2 + b3 + b1;
            if(max < b3 + b1 + b3) max = b3 + b1 + b2;
            if(max < b3 + b2 + b1) max = b3 + b2 + b1;

            cout<<max<<endl;
        }

    }


    return 0;
}
