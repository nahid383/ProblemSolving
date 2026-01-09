#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"0\n" 
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define foriton for(long long i=0; i<n-1; i++)
#define foritom for(long long i=0; i<m; i++)
#define forntoi for(long long i=n-1; i>=0; i--)
#define wt while(t--)
#define en "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;

    ll n = s.length();
    int count = 0;

    ll d = abs(s[0]-'a');

    if(d<=13){
        count=count+d;
    } else{
        count=count+(26-d);
    }
    foriton{
        d=abs(s[i]-s[i+1]);

        if(d<=13){
        count=count+d;
        } else{
        count=count+(26-d);
        }
    }
        

    
    countt;
}
