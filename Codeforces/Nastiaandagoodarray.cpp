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
// const int MAX = 1e9 + 5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    ll t;
    cin>>t;
    while(t--){
        long long result=LLONG_MAX;
        ll p=-1;
        ll n;
        cin>>n;
        vl a(n);
        scan(a,n);
        
        // ll min_ = LLONG_MAX;
        // ll pos=0;

        // foriton(n){
        //     min_ = min(min_,a[i]);
        //     pos=i;
        // }

        // cout<<n-1<<endl;

        // for(ll i=pos-1; i>=0; i--){
        //     cout<<pos+1<<" "<<i+1<<" "<<min_<<" "<<min_+(pos-i)<<endl;
        // }

        // for(ll i=pos+1; i<n; i++){
        //     cout<<pos+1<<" "<<i+1<<" "<<min_<<" "<<min_+(i-pos)<<endl;
        // }
        foriton(n){
            if(a[i]<result){
                result=a[i];
                p=i;
            }
        }

        cout<<n-1<<endl;
        foriton(n){
            if(i==p){
                continue;
            }
            cout<<p+1<<" "<<i+1<<" "<<result<<" "<<result+abs(i-p)<<endl;
        }
    }
}