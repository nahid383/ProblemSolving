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
        ll n;
        cin>>n;
        vl x(n), y(n);
        foriton(n){
            cin>>x[i]>>y[i];
        }
        if(n==1){
            cout<<n<<endl;
            continue;
        }
        sorted(x);
        sorted(y);

        ll res = (x.back()-x.front()+1) * (y.back()-y.front()+1);
        res = min(res, (x.back()-x[1] +1) * (y.back() -y.front()+1));
        res = min(res, (x[n-2]-x.front()+1)*(y.back()-y.front()+1));
        res = min(res, (x.back()-x.front()+ 1) * (y.back()-y[1]+1));
        res = min(res, (x.back() - x.front() + 1) * (y[n-2]-y.front() + 1));
        cout<<res<<endl;
    }
}