#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);

    for(ll i=0; i<n; i++){
        cin>>a[i];
    }

    ll count = 0;

    // for(ll i=0; i<n-1; i++){
    //     for(ll j=i+1; j<n; j++){
    //         if((a[i]+a[j])%x==0 && (a[i]*a[j])%x==0){
    //             count++;
    //         }
    //     }
    // }

    vector<ll> freq(x,0);

    for(ll i=0; i<n; i++){
        freq[a[i]%x]++;
    }

    cout<<count;

    
}