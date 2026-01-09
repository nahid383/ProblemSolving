#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#include<unordered_map>
#include<map>
#include <cstdint>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mone cout<<"-1\n"
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define en "\n"
#define MOD 998244353
#define ll long long
using namespace std;
const int MAX = 1e5+5;

int solve(int k, int n){
    if((k==0)){
        return n;
    }

    int sum = 0;

    for(int i=1; i<=n; i++){
        sum+=solve(k-1, i);
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,n; 
        cin>>k>>n;
        cout<<solve(k,n)<<en;
    }
}
