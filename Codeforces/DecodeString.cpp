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
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define en endl
#define MOD 998244353
#define ll long long
using namespace std;

void solve(int n){
    string s;
    cin>>s;
    string result = "";
    for(int i=n-1; i>=0; i--){
        if(s[i]=='0'){
            int n = ((s[i-2]-'0')*10 + (s[i-1]-'0'));
            result = result + char('a'+n-1);
            i = i-2;
        } else{
            result = result + char('a' + (s[i]-'0')-1);
            
        }
    }
    reverse(result.begin(), result.end());
    ans;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
        
    }
       
}
