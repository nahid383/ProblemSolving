#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *l;

    public:
    Graph(int V){
        this->V = V;
        l = new list<int> [V];
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void dfsHelper(int u, vector<bool> &vis){
        cout<<u<<" ";
        vis[u]=true;
        for(int v:l[u]){
            if(!vis[v]){
                dfsHelper(v, vis);
            }
        }
    }

    void dfs(){
        int src = 0;
        vector<bool> vis(V, false);
        dfsHelper(src, vis);
    }

    void bfs(){
        queue<int> Q;
        vector<int> vis(V, false);
        Q.push(0);
        vis[0]=true;

        while(Q.size()>0){
            int u = Q.front();
            Q.pop();
            cout<<u<<" ";
            for(int v: l[u]){
                if(!vis[v]){
                    vis[v] = true;
                    Q.push(v);
                }
            }
        }

        cout<<endl;

    }

};
int main(){
    Graph g(13);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 6);
    g.addEdge(6, 7);
    g.addEdge(6, 8);
    g.addEdge(8, 9);
    g.addEdge(8, 10);
    g.addEdge(8, 11);
    g.addEdge(8, 12);

    cout<<"DFS order of the graph: ";
    g.dfs();
    cout<<endl;
    cout<<"BFS order of the graph: ";
    g.bfs();

}