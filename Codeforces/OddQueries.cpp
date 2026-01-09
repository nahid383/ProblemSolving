/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D    D
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
#define vs vector<string>
#define bo bool 
#define iP isPossible
#define foriton for(long long i=0; i<n; i++)
#define forntoi for(long long i=n-1; i>=0; i=i-2)
#define en cout<<"\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vi a(n);
        foriton{
            cin>>a[i];
        }
        vl s(n);
        s[0]=a[0];
        for(int i=1; i<n; i++){
            s[i]=s[i-1]+a[i];
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            ll sum= 0;
            // for(long long i=l-1; i<r; i++) {
            //     a[i]=k;
            // }
            // foriton{

            //     sum+=a[i];
            // }

            if(l>1)
            sum+=s[l-2];
            sum += (ll)(r-l+1)*k;
            if(r<n) 
            sum += s[n-1]-s[r-1];
            
            if(sum%2!=0){
                yes;
            } else{
                no;
            }
        }
    }
    
}
