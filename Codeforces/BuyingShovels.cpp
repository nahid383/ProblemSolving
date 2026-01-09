#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// int noShovels(int n, int k){
//     int m = n +(k-1);
//     int r = m/k;
//     return r;
// }
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        // int ans = noShovels(n,k);
        // if(n%2!=0 && k%2==0){
        //     cout<<n<<endl;
        // }
        // else{
        //     cout<<ans<<endl;
        // }
        // int result;
        // for(int i=k; i>=1; i--){
        //     if(n%i==0){
        //         result = n/i;
        //         break;
        //     }
        // }
        // bool isDivide = false;
        if(n<=k){
            cout<<1<<endl;
            continue;

        }
        ll minPack = n;
        for(ll i=1; i*i<=n; ++i){
            if(n%i==0){
                if(i<=k){
                    minPack = min(minPack, n/i);
                }
                if(n/i<=k){
                    minPack = min(minPack, i);
                }
            }
        }
        cout<<minPack<<endl;
        // else{
        //     for(int i=k; i>=k/2; i--){
        //         if(n%i==0){
        //            result = n/i;
        //            isDivide = true;
        //            break;
        //         }
        //     }
        //     if(!isDivide){
        //         cout<<n<<endl;
        //     }
        //     else{
        //         cout<<result<<endl;
        //     }
          
        // }


    }
}