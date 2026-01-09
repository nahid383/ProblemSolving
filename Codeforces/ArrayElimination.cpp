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
        int n;
        cin>>n;
        vl a(n);
        scan(a, n);

        ll b=0;
        bool first = true;
        bool alZero=true;
        if(n==1 && a[0]==1){
            cout<<1<<endl;
            continue;
        }
        foriton(n){
            if(a[i]!=0){
                alZero=false;
                if(a[i]>0){
                if(first){
                    b=a[i];
                    first=false;
                } else{
                    b=b&a[i];
                }
            }
            }
            
        }
        if(alZero){
            foriton(n){
                cout<<i+1<<" ";
            }
            en;
            continue;
        }
        ll cnt=0;
        foriton(n){
            if(a[i]==b){
                cnt++;
            }
        }

        for(ll i=1; i<=cnt; i++){
            if(cnt%i==0){
                cout<<i<<" ";
            }
        }
        en;

        
    }
}