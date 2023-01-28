#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

#define INF INT_MAX
#define MAX_V 1024
#define MAX_E 524288

struct edge {
    i64 to, cost;
    i64 num;
};
typedef pair<int, int> P;

vector<edge> G[MAX_V];
vector<i64> sai;

i64 V, E;
i64 d[MAX_V];

void dijkstra(int s) {
    priority_queue<P, vector<P>, greater<P>> que;
    fill(d, d + V, INF);
    d[s] = 0;
    que.push(P(0, s));

    while (!que.empty()) {
        P p = que.top();
        que.pop();
        i64 v = p.second;
        if (d[v] < p.first) continue;

        sai.push_back(p.second);

        for (i64 i = 0; i < G[v].size(); i++) {
            edge e = G[v][i];
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }
}

int main() {
    i64 D, K;
    cin >> V >> E >> D >> K;
    i64 dd = (E + D - 1) / D;
    for(i64 i = 0; i < E; i++){
        i64 s, g, r;
        cin>>s>>g>>r;
        edge e;
        e.to = g;
        e.cost = r;
        e.num = i;
        G[s].push_back(e);
        e.to = s;
        G[g].push_back(e);
    }
    for(i64 i = 0; i < V; i++){
        i64 x, y;
        cin>>x>>y;
    }
    dijkstra(1);
    vector<i64> day(E);
    fill(day.begin(), day.end(), 0);
    i64 j = 0;
    for(i64 i = 0; i < sai.size(); i++, j++){
        day[sai[i]] = j / dd + 1;
    }
    for(i64 i = 0; i < E; i++){
        if(day[i] == 0){
            day[i] = j / dd + 1;
            j++;
        }
    }
    for(i64 i = 0; i < E; i++){
        cout<<day[i]<<" ";
    }

    return 0;
}