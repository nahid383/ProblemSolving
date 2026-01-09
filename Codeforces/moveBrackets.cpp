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
#define en "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;
int solve(string s, ll n){
    vector<char> ve;
    foriton{
        if(s[i]=='('){
            ve.push_back(s[i]);
        } else{
            if(!ve.empty() && ve.back()=='('){
                ve.pop_back();
            }
        }
    }
    cout<<ve.size()<<en;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        solve(s,n);
    }

}
