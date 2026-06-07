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
#define countt cout << cnt << "\n"
#define vl vector<long long>
#define vi vector<int>
#define vs vector<string>
#define pll pair<long long, long long>
#define pb(x) push_back(x) 
#define foriton(n) for (long long i = 0; i < n; i++)
#define scan(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
#define print(a, n) for (long long i = 0; i < n; i++) cout << a[i] <<" ";
#define forntoi(n) for (long long i = n - 1; i >= 0; i--)
#define freqCount(a) for(long long i=0; i<n; i++) freq[a[i]]++
#define all(a) a.begin(), a.end()
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

vl dijkstra(ll n, vector<vector<pll>>& adj){
    vl dist(n+1, LLONG_MAX);
    vl parent(n+1, -1);
    priority_queue<pll, vector<pll>,
    greater<pll>> pq;

    dist[1] = 0;
    pq.push({0, 1});

    while(!pq.empty()){
        ll d = pq.top().first;
        ll u = pq.top().second;
        pq.pop();

        if(d>dist[u]){
            continue;
        }

        for(auto& edge : adj[u]){
            ll v = edge.first;
            ll we = edge.second;

            if(dist[u]+we<dist[v]){
                dist[v] = dist[u]+we;
                parent[v] = u;
                pq.push({dist[v], v});
            }
        }

    }
    if(dist[n]==LLONG_MAX){
        return{};
    }

    vl path;
    for(ll i=n; i!=-1; i=parent[i]){
        path.push_back(i);
    }
    return path;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    ll n,m;
    cin>>n>>m;
    vector<vector<pll>> adj(n+1);

    foriton(m){
        ll a,b,w;
        cin>>a>>b>>w;
        adj[a].push_back({b, w});
        adj[b].push_back({a, w});
    }

    vl path = dijkstra(n, adj);

    if(path.empty()){
        cout<<-1<<endl;
    } else{
        forntoi(path.size()){
            cout<<path[i]<<" ";
        }
        en;
    }
}