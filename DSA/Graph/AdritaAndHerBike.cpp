#include<bits/stdc++.h>
using namespace std;

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
        int n, r, s, d;
        cin>>n>>r>>s>>d;

        vector<vector<Edge>> g(n+1);
        for(int i=1; i<=r; i++){
            int a,b,c;
            cin>>a>>b>>c;
            long long cost = 12+c;
            g[a].push_back(Edge(b, cost));
            g[b].push_back(Edge(a, cost));
        }

        vector<long long> dist(n+1, LLONG_MAX);
        dist[s] = 0;
        priority_queue<pair<long, long>, vector<pair<long, long>>, greater<pair<long, long>>> pq;
        pq.push({0, s});

        while(!pq.empty()){
            auto [cd, u] = pq.top();
            pq.pop();

            if(cd>dist[u]){
                continue;
            }

            for(auto edge : g[u]){
                int v = edge.v;
                int wt = edge.wt;

                if(dist[u]+wt<dist[v]){
                    dist[v]= dist[u]+wt;
                    pq.push({dist[v], v});
                }
            }
        }

        cout<<dist[d]<<endl;

    }
}