#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll sum = 0;
    for(ll  i=0; i<n-1; i++){
        for(ll j=i+1; j<n; j++){
            sum = sum + (a[i]&a[j]);
        }
    }
    cout<<sum<<"\n";
    
}