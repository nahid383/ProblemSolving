/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D    D
 N  NN  A     A H   H   I   D   D
 N   N  A     A H   H  III  DDDD
*/
#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mone cout << "-1\n"
#define ans cout << result << "\n"
// #define countt cout << count << "\n"
#define vl vector<long long>
#define vi vector<int>
#define vs vector<string>
#define foriton for (long long i = 0; i < n; i++)
#define scan(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
#define forntoi for (long long i = n - 1; i >= 0; i = i - 2)
#define sorted(a) sort(a.begin(), a.end())
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

struct Node{
    int data;
    Node* next;
};

Node* adj[MAX];
int a[MAX];
int n,m;
int countt = 0;

void addEdge(int u, int v){
    Node* newNode1 = new Node{v, adj[u]};
    adj[u] = newNode1;

    Node* newNode2 = new Node{u, adj[v]};
    adj[v] = newNode2;
}

void dfs(int node, int parent, int c){
    if(a[node]){
        c++;
    } else{
        c = 0;
    }

    if(c>m){
        return;
    }

    bool leaf = true;

    for(Node* temp = adj[node]; temp!=nullptr; temp=temp->next){
        int child = temp->data;

        if(child!=parent){
            leaf = false;

            dfs(child, node, c);
        }


    }

    if(leaf){
        countt++;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    cin>>n>>m;

    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n-1; i++){
        int u,v;
        cin>>u>>v;

        addEdge(u,v);
    }

    dfs(1,0,0);
    cout<<countt<<endl;
    

}