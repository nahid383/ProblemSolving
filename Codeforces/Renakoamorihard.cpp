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
#define forntoi for (long long i = n - 1; i >= 0; i = i --)
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
        vl a(n), b(n);
        ll A=0, B=0;
        scan(a, n);
        scan(b,n);
        foriton(n){
            A^=a[i];
        }
        foriton(n){
            B^=b[i];
        }
        if(A==B){
            cout << "Tie\n";
            continue;
        }
        ll x=A^B;
        ll k=31 - __builtin_clz(x);
        ll last = -1;
        foriton(n){
            if(((a[i]^b[i])>>k)&1) 
            last = i + 1;
        }
        if(last%2==1) 
        cout<<"Ajisai\n";
        else 
        cout<<"Mai\n";
    }
}