#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;              
    // V = মোট কয়টা vertex/node আছে graph এ

    list<int> *l;       
    // l হলো pointer
    // dynamic array of list<int>
    // প্রতিটা list = একেকটা node এর adjacency list (neighbor list)

public:
    Graph(int V){
        this->V = V;    
        // constructor parameter V → object এর ভিতরের V তে set করা হচ্ছে
        // মানে graph এ কয়টা node থাকবে সেটা ঠিক করা

        l = new list<int> [V];
        // dynamic memory allocation
        // V টা list<int> তৈরি হচ্ছে
        // l[0], l[1], ..., l[V-1]
        // প্রতিটা list একটি node এর neighbor list
    }

    void addEdge(int u, int v){
        l[u].push_back(v);  
        // node u এর adjacency list এ v যোগ করা
        // মানে u → v edge

        l[v].push_back(u);  
        // node v এর adjacency list এ u যোগ করা
        // মানে v → u edge
        // তাই এটা undirected graph
    }

    void printAdjList(){
        for(int i=0; i<V; i++){
            cout<<i<<" : ";
            for(int neigh : l[i]){
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }
};  
int main(){
    Graph g(5); 
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.printAdjList();
}