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
#define foriton(n) for (long long i = 0; i < n; i++)
#define scan(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
#define print(a, n) for (long long i = 0; i < n; i++) cout << a[i] <<" ";
#define forntoi(n) for (long long i = n - 1; i >= 0; i--)
#define all(a) a.begin(), a.end()
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
// const long long MAX = 1e18 + 5;

ll countr(ll x, ll y, ll k){
    ll n = 1e12;
    foriton(x){
        if(k>n){
            return -1;
        }
        ll rem = k%(y-1);
        ll a;
        if(rem == 0){
            a = -1;
        } else{
            a = rem;
        }
    
        k = (k/(y-1)) * y + a;
    }
    if(k>n){
            return -1;
    }

    return k;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin>>t;
    while(t--){
        ll x,y,k;
        cin>>x>>y>>k;
        if(y==1){
            cout<<-1<<endl;
            continue;
        }
        // ll low=1;
        // ll high = MAX;
        // ll res = -1;
        // while(low<=high){
        //     ll mid = (low+(high-low))/2;

        //     ll cnt = countr(mid, x, y);

        //     if(cnt>=k){
        //         res = mid;
        //         high = mid-1;
        //     } else{
        //         low = mid+1;
        //     }
        // }



        cout<<countr(x,y,k)<<endl;
    }
}