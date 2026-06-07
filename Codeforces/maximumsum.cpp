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

    int t;
    cin>>t;
    while(t--){
        ll n, k; cin>>n>>k;
        vl a(n); scan(a, n);
        sorted(a);
        vl pref(n, 0), suff(n, 0);
        pref[0] = a[0];
        suff[n-1] = a[n-1];
        for(int i=1; i<n; ++i){
            pref[i] = pref[i-1] + a[i];
        }

        for(int i=n-2; i>=0; --i){
            suff[i] = suff[i+1] + a[i];
        }

        ll res = 0;
        ll s = accumulate(a.begin(), a.end(), 0LL);

        for(ll t = 0; t<=k; ++t){
            ll left = t;
            ll right = k-t;
            ll temp = s;
            if(left){
                temp -= pref[2*left-1];
            }
            if(right){
                temp -= suff[n-right];
            }

            res = max(res, temp);
        }

        cout<<res<<endl;
    }
}
