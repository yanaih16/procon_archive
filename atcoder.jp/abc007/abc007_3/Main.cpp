#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

const i64 dx[4] = {1, 0, -1, 0};
const i64 dy[4] = {0, 1, 0, -1};

int main(){
    i64 R, C;
    i64 sx, sy, gx, gy;

    cin >> R >> C;
    cin >> sy >> sx >> gy >> gx;
    sx--;
    sy--;
    gx--;
    gy--;

    string mass[R];
    for (i64 i = 0; i < R; i++) cin >> mass[i];
    
    queue<pair<i64,i64>> q;
    int d[R][C];
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            d[i][j]=1e9;
    d[sx][sy]=0;
    q.push({sx,sy});

    while(q.size()){
        pair<i64,i64> s = q.front();
        q.pop();
        if(s.first==gy&&s.second==gx) break;
        for(int i=0;i<4;i++){
            if(0<=s.first+dx[i]&&s.first+dx[i]<R&&0<=s.second+dy[i]&&s.second+dy[i]<C&&mass[s.first+dx[i]][s.second+dy[i]]!='#'&&d[s.first+dx[i]][s.second+dy[i]]==1e9){
                d[s.first+dx[i]][s.second+dy[i]]=d[s.first][s.second]+1;
                q.push({s.first+dx[i],s.second+dy[i]});
            }
        }
    }
    cout<<d[gy][gx]<<endl;
}