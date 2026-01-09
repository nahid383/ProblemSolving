#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#include<unordered_map>
#include<map>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define en endl
#define MOD 998244353
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       int t;

       cin>>t;
       while(t--){
            ll n;
            cin>>n;
            vector<ll> p(n);
            for(int i=0; i<n; i++){
                cin>>p[i];
            }

            vector<ll> q(n);
            for(ll i=0; i<n; i++){
                cin>>q[i];
            }

            vector<ll> r(n);
            for(ll i=0; i<n; i++){
                ll maxi = 0;
                for(ll j=0; j<=i; j++){
                    ll val = pow(2,p[j]) + pow(2,q[i-j]);
                    if(val>maxi){
                        maxi = val;
                    }
                }
                r[i] = maxi%MOD;
            }
            for(ll i=0; i<n; i++){
                cout<<r[i]<<" ";
            }
            cout<<"\n";
       }
}
