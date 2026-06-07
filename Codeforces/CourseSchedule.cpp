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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    vi in(n+1, 0);
    foriton(m){
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
        in[b]++;
    }

    queue<int> q;
    for(int i=1; i<=n; i++){
        if(in[i]==0){
            q.push(i);
        }
    }

    vi order;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        order.push_back(node);

        for(int next : adj[node]){
            in[next]--;
            if(in[next]==0){
                q.push(next);
            }
        }
    }

    if(order.size()!=n){
        cout<<"IMPOSSIBLE"<<endl;
    } else{
        for(int x:order){
            cout<<x<<" ";
        }
    }
}