/*
 N   N   AAAAA  H   H  III  DDDD  
 NN  N  A     A H   H   I   D   D 
 N N N  AAAAAAA HHHHH   I   D   D 
 N  NN  A     A H   H   I   D   D 
 N   N  A     A H   H  III  DDDD  
*/

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
#define forntoi for(long long i=n-1; i>=0; i--)
#define en cout<<"\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;

void solve(ll n){
    vl res;
    ll p=1;
    for(int i=1; i<=18; i++){
        p*=10;
        ll d = p+1;
        if(n%d==0){
            res.push_back(n/d);
        }
    }

    cout<<res.size();
    en;
    sort(res.begin(), res.end());
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    en;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        // if(n%11!=0){
        //     cout<<0<<endl;
        //     continue;
        // }

        solve(n);
    }
}
