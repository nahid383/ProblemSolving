#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    vector<int> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    // sort(a.begin(),a.end());
    // for(int i=0; i<n; i++){
    //     if(a[i]>n)
    // }
    ll count = 0;
    for(ll i=0; i<n; i++){
        ll sum = 0;
        for(ll j=i; j<n; j++){
            sum+=a[j];
            if(sum%n==0){
                count++;
            }
        }
    }
    cout<<count;
}