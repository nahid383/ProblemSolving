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
#define pb(x) push_back(x) 
#define foriton(n) for (long long i = 0; i < n; i++)
#define scan(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
#define print(a, n) for (long long i = 0; i < n; i++) cout << a[i] <<" ";
#define forntoi for (long long i = n - 1; i >= 0; i = i - 2)
#define sorted(a) sort(a.begin(), a.end())
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int n;
    cin>>n;
    int Togames = n*(n-1)/2-1;
    vi count(n+1, 0);

    vector<pair<int, int>> games;
    vector<vector<bool>> adj(n+1, vector<bool>(n+1, false));
    
    foriton(Togames){
        int x,y;
        cin>>x>>y;
        games.push_back({x, y});
        count[x]++;
        count[y]++;
        adj[x][y] = true;

    }

    vi missing;
    for(int i=1; i<=n; i++){
        if(count[i]<n-1){
            missing.push_back(i);
        }
    }

    vector<vector<bool>> reach = adj;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(reach[j][i]){
                for(int k=1; k<=n; k++){
                    if(reach[i][k]){
                        reach[j][k]=true;
                    }
                }
            }
        }
    }


    if(reach[missing[0]][missing[1]])
    cout<<missing[0]<<" "<<missing[1]<<endl;
    else
    cout<<missing[1]<<" "<<missing[0]<<endl;
}