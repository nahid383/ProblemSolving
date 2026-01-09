#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        ll j = cbrt(x);
        bool cubed = false;
        // for(ll i=1; i<=n; i++){
        //     for(ll j=1; j<=n; j++){
        //         if(pow(i,3)+pow(j,3)==x){
        //             cubed = true;
        //             break;
        //         }
        //     }
        ll i =1;
        while(i<=j){
            ll sum = (i*i*i) + (j*j*j);
            if(sum==x){
                cubed = true;
                break;
            }
            else if(sum<x){
                i++;
            }
            else{
                j--;
            }
        }
        if(cubed){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
        
    }
}