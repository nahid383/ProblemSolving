#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int> *l;

    public:
    Graph (int V){
        this->V = V;
        l = new list<int> [V];
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);

    }
    void printGraph(){
        for(int i=0; i<V; i++){
            cout<<i<<" : ";
            for(int adjc : l[i]){
                cout<<adjc<<" ";
            }
            cout<<endl;
        }
    }


};

int main(){
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.printGraph();
}