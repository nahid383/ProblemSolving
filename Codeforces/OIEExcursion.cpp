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

    ll t;
    cin>>t;
    while(t--){
        ll n, m; cin>>n>>m;
        vl a(n+2, 0);
        for(ll i=1; i<=n; i++) cin>>a[i];
        ll prev =a[1];
        ll len = 0;
        ll val = 0;
        for(ll i=1; i<=n; i++){
        /*if((a[i]+i)%m==0){
            if(i>2 && a[i-1]==a[i] && i<n && a[i+1]==a[i]){
                ok=0;
            }*/
            if(a[i]==prev){
                len++;
            } else{
            val = max(val, len);
            len = 1;
            prev = a[i];
            }
        }
        val = max(val, len);
        if(val>=m) no;
        else yes;

         /*if(ok) yes;
        else no;*/
    }
}
