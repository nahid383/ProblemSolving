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
#define forntoi for(long long i=n-1; i>=0; i--)
#define en cout<<"\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vl a(n);
        vl freq(1000005, 0);
        ll maxi = 0;
        foriton{
            cin>>a[i];
            freq[a[i]]++;
            if(maxi<a[i])
            maxi=a[i];
        }
        bool isPossible = true;
        for(ll i=2; i<=maxi; i++){
            if(freq[i]%i!=0 && freq[i]!=0){
                isPossible = false;
                break;
            }
        }

        if(isPossible){
            yes;
        } else{
            no;
        }


    }
    
}