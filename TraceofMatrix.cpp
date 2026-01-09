#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"0\n" 
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define foriton for(long long i=0; i<n; i++)
#define foritom for(long long i=0; i<m; i++)
#define forntoi for(long long i=n-1; i>=0; i--)
#define wt while(t--)
#define en "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    wt{
        ll m;
        cin>>m;
        ll n=m*m;
        vl a(n);


        foriton{
            cin>>a[i];
        }

        sort(a.begin(), a.end(),greater<int>());
        ll sum = 0;
        for(ll i=0; i<m-1; i++){
            sum+=a[i];
        }

        cout<<sum<<en;



    }
    
}
