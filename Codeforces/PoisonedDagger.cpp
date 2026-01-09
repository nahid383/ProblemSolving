#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,h;
        cin>>n>>h;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        int result;
        if(h%n==0){
            result = h/n;
        }
        else{
            result = (h/n)+1;
        }
        cout<<result<<endl;
    }
}
