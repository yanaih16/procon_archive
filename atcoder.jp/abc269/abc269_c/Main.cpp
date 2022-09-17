#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

vector<i64> answer;

void ans(bool nishin[61], i64 count, i64 num){
    if(count == 0){
        answer.push_back(num);
        if(nishin[0] == 1){
        answer.push_back(num+1);
        }
    }else {
        ans(nishin, count-1, num);

        if(nishin[count] == 1){
            i64 a = 1;
            for(i64 i = 0; i < count; i++){
                a *= 2;
            }
            num += a;
            ans(nishin, count-1, num);
        }
    }
}


int main() {
    i64 n;
    cin>>n;
    bool nishin[61];
    i64 count=0;
    nishin[count] = n % 2;
    n /= 2;
    while(n != 0){
        count++;
        nishin[count] = n % 2;
        n /= 2;
    }
    ans(nishin, count, 0);
    sort(answer.begin(), answer.end());
    for(i64 i = 0; i < answer.size(); i++){
        cout<<answer[i]<<endl;
    }
    
    return 0;
}
