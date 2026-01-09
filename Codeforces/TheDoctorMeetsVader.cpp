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
#define forntoi(n) for (long long i = n - 1; i >= 0; i--)
#define all(a) a.begin(), a.end()
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    ll s,b;
    cin>>s>>b;
    vl a(s);
    foriton(s){
        cin>>a[i];
    }

    vector<pair<ll, ll>> s2(b);

    foriton(b){
        cin>>s2[i].first>>s2[i].second;
    }
    sort(all(b));

    vl sorted(b);

    foriton(b){
        sorted[i] = s2[i].first;
    }

    vl pref(b+1, 0);
    foriton(b){
        pref[i+1] = pref[i] + s2[i].second;
    }

    foriton(s){
        ll x = a[i];
        ll y=b;
        for(ll pos=0; pos<b; pos++){
            if(sorted[pos]>a){
                y=pos;
                break;
            }
        }

        ll g = pref[y];
        cout<<g;
        if(i<s-1){
            cout<<" ";
        }
    }

    en;
}