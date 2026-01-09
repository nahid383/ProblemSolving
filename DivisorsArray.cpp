#include<iostream>
#include<vector>
using namespace std;
#define ll long long
ll factor=1;
int factorial(ll n){
 
    if(n==1){
        return factor;
    }

    factor=factor*n;
    factorial(n-1);
}

int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n);
    ll fact = factorial(m);
    for(ll i=0; i<n; i++){
        cin>>a[i];
        a[i]=a[i]*fact;

    }
    
    for(ll i=0;i<n; i++){
        ll num = a[i];
        ll count = 0;
        for(ll j=1; j<=num; j++){
             if(num%j==0){
                count++;
             }
        }
        cout<<count<<" ";
    }
    cout<<"\n";
}