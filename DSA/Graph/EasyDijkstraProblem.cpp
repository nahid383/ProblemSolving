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
        int V, k;
        cin>>V>>k;
        vector<int> a(k+1), b(k+1), c(k+1);
        for(int i=1; i<=k; i++){
            cin>>a[i]>>b[i]>>c[i];
        }
        int A, B;
        cin>>A>>B;

        vector<vector<Edge>> g(V+1);

        for(int i=1; i<=k; i++){
            g[a[i]].push_back(Edge(b[i], c[i]));
        }

        vector<long long> dist(V+1, LLONG_MAX);
        dist[A] = 0;

        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
        pq.push({0, A});

        while(!pq.empty()){
            auto [d, u] = pq.top();
            pq.pop();

            if(d>dist[u]){
                continue;
            }

            for(auto edge: g[u]){
                int v = edge.v;
                int wt = edge.wt;

                if(dist[u]+wt<dist[v]){
                    dist[v] = dist[u] + wt;

                    pq.push({dist[v], v});
                }
            }
        }

        if(dist[B] == LLONG_MAX){
            cout<<"NO"<<endl;
        } else{
            cout<<dist[B]<<endl;
        }
    }
}