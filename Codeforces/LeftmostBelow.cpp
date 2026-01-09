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
#define en "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;

bool isPossible(vl &b, vl &temp){
    ll n = b.size();
    for(ll i=n-1; i>0; i--){
        if(b[i]>=2*temp[i]){
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vl b(n);
        vl temp(n);
        ll minimum = LLONG_MAX;
        foriton{
            cin>>b[i];
            minimum = min(b[i], minimum);
            temp[i]=minimum;
        }
        // bool isPossible = true;

        // foriton{
        //     if(b[i]<minimum){
        //         isPossible = false;
        //         break;
        //     }

        //     minimum=b[i];

        // }

        if(isPossible(b,temp)){
            yes;
        } else{
            no;
        }
    }
    
}