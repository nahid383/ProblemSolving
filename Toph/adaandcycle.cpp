#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e9;
int n;
vector<int> adj[2005], radj[2005];

vector<int> bfs(int src, vector<int> g[]){
    vector<int> dist(n, MAX);
    queue<int> q;
    dist[src] = 0;
    q.push(src);

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v:g[u]){
            if(dist[v]==MAX){
                dist[v] = dist[u]+1;
                q.push(v);
            }
        }
    }

    return dist;
}
int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int x;
            cin>>x;
            if(x==1){
                adj[i].push_back(j);
                radj[j].push_back(i);
            }
        }
    }

    for(int i=0; i<n; i++){
        vector<int> out = bfs(i, adj);
        vector<int> in = bfs(i, radj);

        int res = MAX;

        for(int v: adj[i]){
            if(v==i){
                res = 1;
                break;
            }
        }
        for(int j=0; j<n; j++){
            if(out[j]!=MAX && in[j]!=MAX){
                res = min(res, out[j]+in[j]);
            }
        }

        if(res==MAX){
            cout<<"NO WAY"<<endl;
        } else{
            cout<<res<<endl;
        }
    }
}