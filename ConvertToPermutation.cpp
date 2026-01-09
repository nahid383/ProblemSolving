#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"-1\n" 
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
        ll n;
        cin>>n;
        vl a(n);
        bool imPossible = false;
        foriton{
            cin>>a[i];
        }

        if(imPossible){
            mone;
        }


        sort(a.begin(), a.end());

        ll count = 0;

        foriton{
            if(a[i]>i+1){
                imPossible = true;
                break;
            } else{
                count+=(i+1) - a[i];
            }
        }
        if(imPossible){
            mone;
        } else{
            countt;
        }

    }
    
}
