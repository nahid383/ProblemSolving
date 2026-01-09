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
        vl a(n);
        foriton{
            cin>>a[i];
        }
        vl mx(n), pref(n);

        mx[0]=pref[0]=a[0];

        for(int i=1; i<n; i++){
            pref[i]=pref[i-1] + a[i];
            mx[i]=max(mx[i-1], a[i]);
        }

        ll result = 0;
        foriton{
            if(mx[i]*2==pref[i]){
                result++;
            }
        }
        ans;

    }
}
