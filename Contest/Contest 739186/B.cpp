#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);

    for(ll i=0; i<n; i++){
        cin>>a[i];
    }

    ll count = 0;

    for(ll i=0; i<n; i++){
        if(a[i]%k==0){
            count++;
        }
    }

    
}