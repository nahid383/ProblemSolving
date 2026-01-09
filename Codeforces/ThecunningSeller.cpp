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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll cost=0;
        while(n>=1){
            ll temp=1;
            ll res=0;
            ll idx=0;
            ll i=0;
            while(true){
                if(temp>n){
                    res=temp/3;
                    idx=i-1;
                    break;
                } else if(temp==n){
                    res=temp;
                    idx=i;
                    break;
                } else{
                    temp*=3;
                }
                i++;
            }
            ll x=1;
            ll y=1;
            foriton(idx-1){
                x=x*3;
            }
            foriton(idx+1){
                y=y*3;
            }
            cost+=x*idx+y;
            n-=res;
        }
        cout<<cost<<endl;
    }
}