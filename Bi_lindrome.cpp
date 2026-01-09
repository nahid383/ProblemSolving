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
ll n, freq[MAX], m, q;

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
        vl freq(26,0);
        foriton{
            freq[s[i]-'a']++;
        }
        bool iS = false;
        for(ll i=0; i<26; i++){
            if(freq[i]>1){
                iS = true;
                break;
            }
        }
        if(iS){
            cout<<n-2<<endl;
        } else{
            mone;
        }
       }
}