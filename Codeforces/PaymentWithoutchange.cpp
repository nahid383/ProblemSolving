#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define e endl
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,n,S;
        cin>>a>>b>>n>>S;
        ll valA;
        // for(ll i=a; ; i--){
        //     valA=i*n;
        //     if(valA<=S){
        //         // valA = n*(i-1);
        //         break;
        //     }
        // }
        // ll rem = S - valA;
        
        if(min(S/n, a)*n+b>=S){
            yes;
        } else{
            no;
        }
        
    }
}
