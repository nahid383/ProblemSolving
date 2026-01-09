/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D    D
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
#define vs vector<string>
#define bo bool 
#define iP isPossible
#define foriton for(long long i=0; i<n; i++)
#define forntoi for(long long i=n-1; i>=0; i=i-2)
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
        ll a,b;
        cin>>a>>b;
        // if((a*b+1)%2!=0){
        //     mone;
        // } else{
        //     int n = b/2;
        //     if(n%2==0){
        //         cout<<(n*a)+(b/n);en;
        //     }

        //     else{
        //         mone;
        //     }
        // }
        // // if(a%2==0 && b%2==0){
        // //     cout<<a+b;en;

        // // } else if(a%2!=0 && b%2!=0){
        // //     cout<<a+b+2;en;
        // // } else{
        // //     mone;
        // // }
        ll c=b;
        ll count = 0;
        while(c%2==0){
            c/=2;
            count++;
        }

        ll result = -1;
        vl bb;
        bb.push_back(1);

        if(c>1){
            bb.push_back(c);
        }

        for(ll i=0; i<=count; i++){
            ll s = 1<<i;
            for(ll j=0; j<bb.size(); j++){
                ll k = s*bb[j];
                if(b%k!=0){
                    continue;
                }

                ll res = a*k+b/k;

                if((res&1)==0)
                result = max(result,res);
            }
        }

        ans;
    }
    
}
