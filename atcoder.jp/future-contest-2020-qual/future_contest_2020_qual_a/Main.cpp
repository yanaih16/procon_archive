#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

struct robo{
    i64 rx,ry;
    char c;
    i64 far;
    bool operator<( const robo& right ) const {
        return far < right.far ;
    }
};
struct block{
    i64 bx,by;
};


int main(){
    i64 d[40][40];
    i64 K=0;
    i64 N,M,B,gx,gy;
    robo r[100];
    block b[300];
    char mass[40][40];
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,1,-1};
    int dr[4]={'D','U','L','R'};

    cin>>N>>M>>B>>gx>>gy;
    
    for(int i=0;i<M;i++){
        cin>>r[i].rx>>r[i].ry>>r[i].c;
        r[i].far=abs(r[i].rx-gx)+abs(r[i].ry-gy);
    }
    for(int i=0;i<40;i++)
        for(int j=0;j<40;j++) mass[i][j]='-';
    mass[gx][gy]='g';
    for(int i=0;i<B;i++) {
        cin>>b[i].bx>>b[i].by;
        mass[b[i].bx][b[i].by]='b';
    }

    sort(r,r+M);

    for(int i=0;i<M;i++){
        int fx=gx,fy=gy;
        bool a=false;
        queue<pair<i64,i64>> q;

        q.push({r[i].rx,r[i].ry});
        for(int j=0;j<40;j++)
            for(int k=0;k<40;k++)
                d[j][k]=1e9;
        d[r[i].rx][r[i].ry]=0;

        while(q.size()){
            pair<i64,i64> p = q.front();
            q.pop();
            if(p.first==gx&&p.second==gy) break;
            if(mass[p.first+1][p.second]=='b'&&mass[p.first-1][p.second]=='b'&&mass[p.first][p.second+1]=='b'&&mass[p.first][p.second-1]=='b') {
                fx=p.first;fy=p.second;
                break;
            }
            if(mass[p.first][p.second]=='U'||mass[p.first][p.second]=='L'||mass[p.first][p.second]=='R'||mass[p.first][p.second]=='D'){
                fx=p.first;fy=p.second;
                break;
            }
            for(int j=0;j<4;j++){
                if(mass[(p.first+dx[j]+40)%40][(p.second+dy[j]+40)%40]=='U'||mass[(p.first+dx[j]+40)%40][(p.second+dy[j]+40)%40]=='D'||mass[(p.first+dx[j]+40)%40][(p.second+dy[j]+40)%40]=='R'||mass[(p.first+dx[j]+40)%40][(p.second+dy[j]+40)%40]=='L'){
                    if(mass[(p.first+dx[j]+40)%40][(p.second+dy[j]+40)%40]!=dr[j]){
                        d[(p.first+dx[j]+40)%40][(p.second+dy[j]+40)%40]=d[p.first][p.second]+1;
                        fx=(p.first+dx[j]+40)%40;fy=(p.second+dy[j]+40)%40;
                        a=true;
                        break;
                    }
                }
                if(mass[(p.first+dx[j]+40)%40][(p.second+dy[j]+40)%40]!='b'&&d[(p.first+dx[j]+40)%40][(p.second+dy[j]+40)%40]>d[p.first][p.second]+1){
                    d[(p.first+dx[j]+40)%40][(p.second+dy[j]+40)%40]=d[p.first][p.second]+1;
                    q.push({(p.first+dx[j]+40)%40,(p.second+dy[j]+40)%40});
                }
            }
            if(a) break;
        }

        int x=fx,y=fy;
        for(int j=0;j<d[x][y];j++){
            for(int k=0;k<4;k++){
                if(d[(fx+dx[k]+40)%40][(fy+dy[k]+40)%40]<d[fx][fy]){
                    fx = (fx+dx[k]+40)%40;
                    fy = (fy+dy[k]+40)%40;
                    mass[fx][fy]=dr[k];
                    K++;
                    break;
                }
            }
        }
    }
    cout<<K<<endl;
    for(int i=0;i<40;i++){
        for(int j=0;j<40;j++){
            if(mass[i][j]=='U'||mass[i][j]=='D'||mass[i][j]=='R'||mass[i][j]=='L') cout<<i<<" "<<j<<" "<<mass[i][j]<<endl;
        }
    }
}