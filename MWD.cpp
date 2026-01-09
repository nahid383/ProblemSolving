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
        ll n,k;
        cin>>n>>k;
        vl a(n);
        scan(a, n);
        sorted(a);
        ll sum = accumulate(a.begin(), a.end(), 0LL);
        ll miniKsum = 0;
        ll maxiKsum = 0;
        for(ll i=0; i<k; i++){
            miniKsum+=a[i];
        }
        ll idx = n-k;

        for(ll i=n-1; i>=idx; i--){
            maxiKsum+=a[i];
        }

        ll result;
        ll diff1 = abs(miniKsum - (sum - miniKsum));
        ll diff2 = abs(maxiKsum - (sum - maxiKsum));

        if(diff1>diff2){
            result=diff1;
        } else{
            result=diff2;
        }
        ans;

    }
}