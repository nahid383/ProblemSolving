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
#define ld long double
const int MAX = 1e5 + 5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--){
        ll n,m,d;
        cin>>n>>m>>d;
        // if(n==11 && m==11 && d==17){
        //     cout<<6<<endl;
        //     continue;
        // }
        // if(m>=d){
        //     cout<<n<<endl;
        //     continue;
        // }

        // ll totalWeight = n*m;
        // ll minTower;

        // cout<<minTower<<endl;
        ll div = d/m;
        ll height = div+1;
        ll tower = n/height;
        if(n%height!=0){
            tower++;
        }
        // minTower = (n+height-1)/height;

        cout<<tower<<endl;
    }
}