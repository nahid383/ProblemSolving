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
        
    ll n,m;
    cin>>n>>m;
    vs s(n);
    scan(s, n);

    vector<vl> f(n, vl(26));
    vl total(26);
    foriton(n){
        for(char c: s[i]){
            f[i][c-'A']++, total[c-'A']++;
        }
    }
    foriton(n){
        vl have = total;
        for(ll j=0; j<26; j++){
            have[j]-=m*f[i][j];
        }
    

    if(!equal(f[i].begin(),f[i].end(),have.begin(),
        [](ll a,ll b){return b>=a;})){
        cout << -1 << "\n";
        continue;
    }

    for(int c=0;c<26;c++) have[c]-=f[i][c];

    ll k=LLONG_MAX;
    for(int l=0;l<n;l++){
        if(l!=i){
            for(int c=0;c<26;c++) if(f[l][c])
            k=min(k,have[c]/f[l][c]);
        }
    } 
    cout << (k==LLONG_MAX?0:k) << "\n";
    }
}