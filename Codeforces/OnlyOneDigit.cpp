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
void solve(int n){
    string num = to_string(n);
    int l = num.length();
    int minima = INT16_MAX;
    for(int i=0; i<l; i++){
        int num1 = num[i] - '0';
        if(num1<minima){
            minima=num1;

        }
    }
    cout<<minima<<en;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        solve(x);
    }
       
}
