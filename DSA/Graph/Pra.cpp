#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
    list<int> *revadj;

public:
    Graph(int V){
        this->V = V;
        adj = new list<int>[V + 1];     // 1-based indexing
        revadj = new list<int>[V + 1];  // 1-based indexing
    }

    void addEdge(int u, int v){
        adj[u].push_back(v);     // directed edge u -> v
        revadj[v].push_back(u);  // reversed edge v -> u
    }

    void dfsHelper(int u, vector<bool> &vis, list<int> *graph){
        vis[u] = true;
        for(int v : graph[u]){
            if(!vis[v]){
                dfsHelper(v, vis, graph);
            }
        }
    }

    bool check(){
        vector<bool> vis(V + 1, false);

        // DFS from city 1
        dfsHelper(1, vis, adj);
        for(int i = 1; i <= V; i++){
            if(!vis[i]){
                cout << "NO\n1 " << i << endl;
                return false;
            }
        }

        fill(vis.begin(), vis.end(), false);
        dfsHelper(1, vis, revadj);
        for(int i = 1; i <= V; i++){
            if(!vis[i]){
                cout << "NO\n" << i << " 1" << endl;
                return false;
            }
        }

        cout << "YES" << endl;
        return true;
    }
};

int main(){
    int n, m;
    cin >> n >> m;
    Graph g(n);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        g.addEdge(a, b);  // no subtraction, 1-based indexing
    }

    g.check();
}