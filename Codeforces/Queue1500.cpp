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
#define all(a) a.begin(), a.end()
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    ll n;
    cin>>n;
    unordered_map<ll, ll> mapping;
    unordered_set<ll> seta, setb;
    foriton(n){
        ll a,b;
        cin>>a>>b;
        if(a!=0){
            seta.insert(a);
        }
        if(b!=0){
            setb.insert(b);
        }

        mapping[a]=b;
    }

    ll s1 = -1;
    for(ll x : seta){
        if(setb.find(x) == setb.end()){
            s1=x;
            break;
        }
    }

    vector<int> res;
    res.push_back(s1);

    if(n>1){
        res.push_back(mapping[0]);
    }

    for(ll i=2; i<n; i++){
        res.push_back(mapping[res[i-2]]);
    }

    for (ll i=0; i<n; i++){
        cout<<res[i]<<(i+1<n?" ":"");
    }
    return 0;
}