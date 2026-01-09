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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    ll n,q;
    cin>>n>>q;
    queue<pair<string, ll>> que;
    ll totalTime = 0;
    foriton(n){
        string s;
        cin>>s;
        ll t;
        cin>>t;
        que.push({s,t});
    }

    while(!que.empty()){
        auto p = que.front();
        que.pop();
        string name = p.first;
        ll time = p.second;
        if(time>q){
            totalTime = totalTime + q;          
            que.push({name, time-q});
        } else if(time<=q){
            totalTime = totalTime + time;
            cout<<name<<" "<<totalTime<<endl;
        }

    }
    

}
