#include<bits/stdc++.h>
using namespace std;
int x=1;
class Edge{
    public:
    int v, wt;
    Edge(int v, int wt){
        this->v = v;
        this->wt = wt;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){

        int n, m;
        cin>>n>>m;
        vector<vector<Edge>> g(n+1);
        for(int i=0; i<m; i++){
            int u,v,w;
            cin>>u>>v>>w;
            g[u].push_back({v, w});
            g[v].push_back({u, w});
        }

        vector<int> dist(n+1, INT32_MAX);
        dist[1] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 1});

        while(!pq.empty()){
            auto [d, u] = pq.top();
            pq.pop();
            if(d>dist[u]){
                continue;
            }

            for(auto edge:g[u]){
                int v = edge.v;
                int wt = edge.wt;

                if(dist[u]+wt<dist[v]){
                    dist[v] = dist[u]+wt;
                    pq.push({dist[v], v});
                }
            }
        }

        if(dist[n]==INT32_MAX){
            cout<<"Case "<<x<<": "<<"Impossible"<<endl;
        } else{
            cout<<"Case "<<x<<": "<<dist[n]<<endl;
        }
        x++;
    }
}