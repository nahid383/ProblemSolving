#include <bits/stdc++.h>
using namespace std;

struct Edge{
    int u,v,w;
    Edge(int u,int v,int w):u(u),v(v),w(w){}
};

class DSU{
public:
    vector<int> parent, rank;
    DSU(int n){
        parent.resize(n+1);
        rank.assign(n+1,0);
        for(int i=1;i<=n;i++) parent[i]=i;
    }
    int find(int x){
        if(parent[x]!=x) parent[x]=find(parent[x]);
        return parent[x];
    }
    bool unite(int x,int y){
        int px=find(x), py=find(y);
        if(px==py) return false;
        if(rank[px]<rank[py]) swap(px,py);
        parent[py]=px;
        if(rank[px]==rank[py]) rank[px]++;
        return true;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<Edge> edges;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back(Edge(u,v,w));
    }

    sort(edges.begin(),edges.end(),[](Edge a,Edge b){return a.w<b.w;});

    DSU dsu(n);
    long long mst_weight=0;

    for(auto e:edges){
        if(dsu.unite(e.u,e.v)){
            mst_weight+=e.w;
        }
    }

    cout<<mst_weight<<"\n";
    return 0;
}