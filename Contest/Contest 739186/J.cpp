#include<iostream>
#include<vector>
using namespace std;
#define ll long long

// int solve(ll n, ll sum){
    
//     if(n==1){
//         return sum = sum+1;
//     }

//     sum = sum + n;

//     solve(n-1,sum);

//     sum = sum+n+1;

    

    
// }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    ll sum = 1;
    if(n==1){
        cout<<sum<<endl;
        return 0;
    }
    for(ll i=2; i<n; i++){
        sum = (sum + i +1)%1000000009;
    }

    sum = (sum + n)%1000000009;

    for(ll i=2; i<n; i++){
        sum = (sum + i +1)%1000000009;
    }

    sum = (sum +1)%1000000009;

    cout<<sum<<endl;
}