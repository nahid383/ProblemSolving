/*
 N   N   AAAAA  H   H  III  DDDD  
 NN  N  A     A H   H   I   D   D 
 N N N  AAAAAAA HHHHH   I   D   D 
 N  NN  A     A H   H   I   D   D 
 N   N  A     A H   H  III  DDDD  
*/

#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"-1\n"
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define foriton for(long long i=0; i<n; i++)
#define forntoi for(long long i=n-1; i>=0; i--)
#define en cout<<"\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;

// int solve(int i, int n, const vi& sum){
//     if(i==n){
//         return 0;
//     }
//     int count = 0;
//     for(int j=i+1; j<=n; j++){
//         int subSum = sum[j]-sum[i];
//         int len = j-i;
//         // sum = sum+(num[j]-'0');
//         // number1++;
//         if(subSum == len){
//             count++;
//         }
//         // if(sum>number1){
//         //     break;
//         // }
//     }

//     return count+ solve(i+1, n, sum);
// }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string num;
        cin>>num;
        // vi sum(n+1, 0);
        // for(int i=0; i<n; i++){
        //     sum[i+1]=sum[i]+(num[i]-'0');
        // }
        unordered_map<int, int> mp;
        mp[0]=1;
        ll a=0, b=0;
        ll count = 0;
        // for(int i=0; i<n; i++){
        //     // int sum = num[i]-'0';
        //     // int number1 = 1;
        //     //  if(sum == number1){
        //     //         count++;
        //     //     }
        for (int i=0; i<n; i++) {
        b += num[i]-'0';  
        ll x = b-i-1;  
        a += mp[x];  
        mp[x]++;  
    }
    cout<<a<<endl;
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<=n; j++){
        //         int subSum = sum[j] - sum[i];
        //         int len = j-i;
        //         if (subSum==len){
        //             count++;
        //         }
        //     }
        // }
        // countt;
        // }
        // int result = solve(0, n, sum);

        // ans;
    }
}