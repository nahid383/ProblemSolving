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

ll gcd(ll smallest, ll s2){
    ll a = smallest;
    ll b = s2;
    while(b!=0){
        ll temp = b;
        b = a%b;
        a = temp;
    }
    if(a==1){
        return s2;
    }

    return gcd(smallest, s2+1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    ll t;
    cin>>t;
    while(t--){
        long long result=LLONG_MAX;
        ll n;
        cin>>n;
        vl a(n);
        scan(a,n);
        
        // ll smallest = *min_element(a.begin(), a.end());

        // result = gcd(smallest, 2);

        foriton(n){
            result=min(result, gcd(a[i],2));
        }

        cout<<result<<endl;
    }
}