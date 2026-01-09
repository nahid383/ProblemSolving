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
        
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        vl a(n);
        scan(a, n);
        unordered_map<ll, ll> freq;
        freqCount(a);
        ll cnt = 0;
        ll maxi = *max_element(a.begin(), a.end());
        for(ll i=0; i<=maxi; i++){
            if(freq[i]!=i){
                if(freq[i]>i){
                    cnt+=(freq[i]-i);
                } else if(freq[i]<i){
                    cnt+=freq[i];
                }
            } 
        }

        countt;


    }
}