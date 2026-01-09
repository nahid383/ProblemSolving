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
const int MAX = 1e5 + 5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vl a(n);
        ll d=0;
        scan(a, n);
        ll cnt = 0;
        vl v;
        foriton(n){
            // if((i+1)%2!=0){
            //     if(a[i]>=a[i+1]){
            //     cnt+=abs(a[i+1] - a[i]+1);
            //     a[i+1] = a[i]+1;
            //     }
            // } else{
            //     if(a[i]<=a[i+1]){
            //         // a[i] = *max_element(a.begin(), a.begin()+i+1);
            //         cnt+= abs(a[i+1] - a[i] + 1);
            //         a[i+1] = a[i] - 1;
            //     }
            // }

            if(a[i]>d){
                d=a[i];

            }
            if(i%2!=0){
                v.push_back(d);
            } else{
                v.push_back(a[i]);
            }
             
        }

        for(ll i=0; i<v.size(); i=i+2){
            if(i<v.size()-1 && v[i]>=v[i+1]){
                cnt+=v[i]-v[i+1]+1;
                v[i]=v[i+1]-1;
            }
            if(i>0 && v[i]>=v[i-1]){
                cnt+=v[i]-v[i-1]+1;
                v[i]=v[i-1]-1;
            }
        }

        countt;
    }
}