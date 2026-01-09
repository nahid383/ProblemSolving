#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#define e endl
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }

        vector<ll> na(n);

        na[0] = a[0];

        for(int i=1; i<n; i++){
            na[i] = max(a[i], na[i-1]);
        }

        ll sum = 0;

        for(int i=0; i<n-1; i++){
            cout<<max(na[n-2-i], a[n-1-i])+sum<<" ";
             sum+=a[n-1-i];
        }
        cout<<a[0]+sum<<e;
    }
}