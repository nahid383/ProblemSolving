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
#define forntoi for(long long i=n-1; i>=0; i=i-2)
#define en cout<<"\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,t;
    cin>>n>>t;
    // if(n>t && n>50){
    //     for(int i=1; i<=n; i++){
    //         cout<<t;
    //     } en;
    //     return 0;

    // }
    // ll num=1;
    // for(ll i=1; i<n; i++){
    //     num=num*10;
    // }
    // ll st = num;
    // ll end = num*10-1;
    // bool isPossible = false;
    // if(st>t){
    //     mone;
    //     return 0;
    // }
    // for(ll i=st; i<=end; i++){
    //     if(i%t==0){
    //         cout<<i;en;
    //         isPossible=true;
    //         break;
    //     }
    // }
    // if(!isPossible){
    //     mone;
    // }

    if(t==10){
        if(n!=1){
            string res = "1";

        while(--n){
            res.push_back('0');
        }
        cout<<res;en;
    } else{
        mone;
    }
    return 0;
    }
    string result;
    while(n--){
        result.push_back(t+'0');
    }

    ans;
}
