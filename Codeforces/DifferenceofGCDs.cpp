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
        ll n,l,r;
        cin>>n>>l>>r;
        ll i=1;
        bool isFlag = false;
        vl a;
        while(i<=n){
            if(l%i==0){
                a.push_back(l);
            } else{
                ll q = l%i;
                ll j = i-q;

                if(l+j<=r){
                    a.push_back(l+j);
                } else{
                    isFlag = true;
                    break;
                }
            }

            i++;
        }

        if(isFlag){
            no;
        } else{
            yes;
            for (ll i = 0; i < n; i++)
            {
                cout<<a[i]<<" ";
            }

            en;
            
        }

    }
    
}