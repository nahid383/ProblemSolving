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
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"0"<<endl
#define ans  cout<<result<<endl
#define en endl
#define MOD 998244353
#define ll long long
using namespace std;
void solve(ll n, ll k, ll m){
    if(n>50){
        cout<<"A"<<en;
    } else if(k>50){
        cout<<"B"<<en;
    } else if(m>50){
        cout<<"C"<<en;
    } else{
        cout<<"NOTA"<<en;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        ll A,B,C;
        cin>>A>>B>>C;
        solve(A,B,C);
    }
       
}
