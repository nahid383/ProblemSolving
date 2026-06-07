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
    
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vl a(n); scan(a, n);
        ll cnt = 0;
        foriton(n){
            if(a[i]%6==0){
                swap(a[i], a[cnt]);
                cnt++;
            }
        }
        for(ll i=cnt; i<n; i++){
            if(a[i]%2==0){
                swap(a[i], a[cnt]);

                cnt++;
            }
        }

        ll cn = n-1;
        for(ll i = n-1; i>=cnt; i--){
            if(a[i]%3==0 && a[i]%2!=0){
                swap(a[i], a[cn]);
                cn--;
            }
        }

        for(int i=0; i<n; i++) cout<<a[i]<<" "; en;
    }
}