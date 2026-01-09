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
void solve(string s) {
    int n = s.length();
    sort(s.begin(), s.end());
    reverse(s.begin(),s.end());
    // for(int i=0; i<=n-3; i++){
    //     if((s[i]=='F' && s[i+1]=='F' && s[i+2]=='T') || 
    //     (s[i]=='N' && s[i+1]=='T' && s[i+2]=='T')){
    //         swap(s[i],s[i+2]);
    //         // swap(s[i+1],s[i+2]);
            
    //     }
    // }
    cout<<s<<en;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        solve(s);
    }
}
