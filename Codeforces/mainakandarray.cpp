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

ll getMaximum(vl &a){
    ll res = -MAX;
    for (int i = 0; i < a.size(); i++)
    {
        res = max(res, a[i]-a[(i+1)%(a.size())]);
    }
    
    ll minn = *min_element(a.begin(), a.begin()+a.size()-1);
    ll maxx = *max_element(a.begin()+1, a.end());
    res = max({res, a[a.size()-1]-minn, maxx-a[0]});
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vl a(n);
        scan(a, n);
        if(n==1){
            cout<<0<<endl;
            continue;
        }

        ll maxi = getMaximum(a);

        cout<<maxi<<endl;
    }
}