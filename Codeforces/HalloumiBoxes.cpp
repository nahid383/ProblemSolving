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
        ll n,k;
        cin>>n>>k;
        vl a(n);
        bool isSame = true;
        foriton{
            cin>>a[i];
        }
        for(int i=1; i<n; i++){
            if(a[i]!=a[i-1]){
                isSame=false;
                break;
            }
        }
        if(is_sorted(a.begin(), a.end())){
            yes;
        } else if(isSame){
            yes;
        } else if(k!=1){
            yes;
        } else{
            no;
        }
    }
    
}
