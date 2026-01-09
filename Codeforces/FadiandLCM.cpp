#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"0\n" 
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define foriton for(long long i=1; i*i<n; i++)
#define foritom for(long long i=0; i<m; i++)
#define forntoi for(long long i=n-1; i>=0; i--)
#define en "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin>>n;
    ll best_a = 1, best_b=n;
    foriton{
        if(n%i==0){
            ll a = i;
            ll b = n/i;

            if((a*b)/__gcd(a,b)==n){
                if(max(a,b)<max(best_a, best_b)){
                    best_a=a;
                    best_b=b;
                }
            }
        }
    }
    cout<<best_a<<" "<<best_b<<en;
}
