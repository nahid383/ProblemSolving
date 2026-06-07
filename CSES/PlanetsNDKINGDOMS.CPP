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
#define countt cout << count << "\n"
#define vl vector<long long>
#define vi vector<int>
#define vs vector<string>
#define foriton(n) for (long long i = 0; i < n; i++)
#define scan(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
#define forntoi(n) for (long long i = n - 1; i >= 0; i--)
#define sorted(a) sort(a.begin(), a.end())
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

class Graph{
    int v;
    list<int> *l;
    list<int> *rev;
    
    public:
    Graph(int v){
        this->v = v;
        l = new list<int> [v];
        rev = new list<int> [v];
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        rev[v].push_back(u);
    }

    void dfs1(int u, vector<bool> &vis, stack<int> &st){
        vis[u] = true;

        for(int x:l[u]){
            if(!vis[x]){
                dfs1(x, vis, st);
            }
        }

        st.push(u);
    }

    void dfs2(int u, vector<bool> &vis, vi &comp, int id){
        vis[u] = true;
        comp[u] = id;

        for(int x:rev[u]){
            if(!vis[x]){
                    dfs2(x, vis, comp, id);
            }
        }
    }
    void findKingdom(){
        stack<int> st;
        vector<bool> vis(v, false);

        foriton(v){
            if(!vis[i]){
                dfs1(i, vis, st);
            }
        }

        fill(vis.begin(), vis.end(), false);

        vi comp(v);

        int k = 0;
        while(!st.empty()){
            int vv = st.top();
            st.pop();

            if(!vis[vv]){
                dfs2(vv, vis, comp, ++k);
            }
        }
        cout<<k<<endl;

        foriton(v){
            cout<<comp[i]<<" ";
        }
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin>>n>>m;

    Graph g(n);

    foriton(m){
        int a, b;
        cin>>a>>b;
        g.addEdge(a-1, b-1);
    }

    g.findKingdom();
}