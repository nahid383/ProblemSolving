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
#define print(a, n) for (long long i = 0; i < n; i++) cout << a[i] <<" ";
#define forntoi for (long long i = n - 1; i >= 0; i = i - 2)
#define all(a) a.begin(), a.end()
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    ll n, m;
    cin>>n>>m;
    vector<vl> graph(n+1);

    foriton(m){
        ll a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vl distance(n+1, -1);
    vl parent(n+1, -1);

    queue<ll> qu;
    qu.push(1);

    distance[1] = 0;

    while(!qu.empty()){
        ll fr = qu.front();
        qu.pop();

        for(auto v:graph[fr]){
            if(distance[v]==-1){
                distance[v]=distance[fr]+1;
                parent[v]=fr;
                qu.push(v);
            }
        }
    }
    if(distance[n]==-1){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;

    }

    vl path;
    ll cur = n;
    while(cur!=-1){
        path.push_back(cur);
        cur=parent[cur];
    }

    reverse(path.begin(), path.end());

    cout<<path.size()<<endl;

    foriton(path.size()){
        cout<<path[i]<<' ';
    }

    en;

}