#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#define ll long long
using namespace std;

ll isPossible(vector<ll> &a, ll n, ll k, ll q){
    // int lessthanTemp = 0;
    ll consecutiveDays = 0;
    // int maxCon = INT16_MIN;
    // for(int i=0; i<n; i++){
    //     if(a[i]<=q){
    //         lessthanTemp++;
    //     } 
    //     int flag = 1;
    //     int j = i;
    //     while(k--){
    //         if(a[j]>q){
    //             flag = 0;
    //             consecutiveDays=0;
    //         } else{
    //             consecutiveDays++;
    //         }
    //         if(consecutiveDays>maxCon){
    //             maxCon = consecutiveDays;
    //         }
    //     }
    //     if(lessthanTemp<k || maxCon<k){
    //         return false;
    //     }
    // }

    ll ans = 0;
    for(ll i=0; i<n; i++){
        if(a[i]<=q){
            consecutiveDays++;
        } else{
            consecutiveDays=0;
        }

        if(consecutiveDays>=k){
            ans = ans+(consecutiveDays-k+1);
        }
    }

    return ans;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        cout<<isPossible(a, n, k, q)<<endl;
        }
}