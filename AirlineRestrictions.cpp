#include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// #include<cmath>
// #include<stack>
// #include<queue>
// #include<list>
// #include<unordered_map>
// #include<map>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
// #define mone cout<<"0\n"
// #define ans  cout<<result<<"\n"
// #define en "\n"
// #define MOD 998244353
// #define ll long long
using namespace std;
// const int MAX = 1e5+5;
void solve(int n, int m){
    if(n==1 || m==1){
        no;
    } else if(n==2&&m==2){
        no;   
    } else  {
        yes;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        solve(n,m);
    }
}
