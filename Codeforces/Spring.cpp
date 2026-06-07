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
        ll a,b,c,n;
        cin>>a>>b>>c>>n;

        ll abc = n/lcm(a, lcm(b, c));
        ll ab = n/lcm(a, b)-abc;
        ll bc = n/lcm(b, c)-abc;
        ll ac = n/lcm(a, c)-abc;

        ll aa = n/a;
        ll bb = n/b;
        ll cc = n/c;
         aa -= (ab+ac+abc);
         bb -= (ab+bc+abc);
         cc -= (ac+bc+abc);
        
         cout<<6*aa+3*ab+3*ac+2*abc<<" "<<6*bb+3*ab+3*bc+2*abc<<" "<<
         6*cc+3*ac+3*bc+2*abc<<endl;
    }
}