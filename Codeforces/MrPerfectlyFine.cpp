#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define e endl
#define ll long long
using namespace std; 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        ll min10 = __LONG_LONG_MAX__;
        ll min01 = __LONG_LONG_MAX__;
        ll min11 = __LONG_LONG_MAX__;
        bool isOne = false;
        bool isTwo = false;
        cin>>n;
        for(ll i=0; i<n; i++){
            ll m;
            string s;
            cin>>m>>s;
            if(s[0]=='1'){
                isOne = true;
            } 
            if(s[1]=='1'){
                isTwo = true;
            }
            if(s=="01"){
                min01=min(min01,m);
            } else if(s=="10"){
                min10=min(min10, m);
            } else if(s=="11"){
                min11=min(min11,m);
            }
        }
        
        ll result;
        if(min01!= __LONG_LONG_MAX__ && min10!= __LONG_LONG_MAX__){
            result = min(min11, min10+min01);
        } else {
            result = min11;
        }

        if(!isOne || !isTwo){
            mone;
        } else{
            ans;
        }
    }
}