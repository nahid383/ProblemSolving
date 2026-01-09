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
#define en cout<<"\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;


int main(){
   int t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    vl b(n);
    ll sumB=0;
    foriton{
        cin>>b[i];
        sumB+=b[i];
    }
    ll s = sumB/(n+1);
    vl a;




    for(int i=0; i<n; i++){
        a.push_back(b[i]-s);
    }

    foriton{
        cout<<a[i]<<" ";
    }
    en;
   }

   
}
