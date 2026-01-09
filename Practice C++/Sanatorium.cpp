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
        
    ll a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<0<<endl;
        return 0;
    }

    ll mx = max({a,b,c});

    ll cnt1 = 0;
    ll cnt2 = 0;

    if(a<mx){
        cnt1 += (mx-1-a);
        cnt2 += (mx-a);
    } 
    if(b<mx){
        cnt1 += (mx-1-b);
        cnt2 += (mx-b);
    } 
    if(c<mx){
        cnt1 += (mx-1-c);
        cnt2 += (mx-c);
    } 

    ll result = min(cnt1,cnt2);

    ans;
}