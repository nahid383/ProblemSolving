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
#define ip isPossible
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
        int n,m;
        cin>>n>>m;
        vi a(n);
        vi b(n);
        foriton{
            cin>>a[i]>>b[i];
        }
        
        ll count = 0;
        ll pA = 0;
        ll pB = 0;
        bool ip =true;
        foriton{
            ll d = a[i] - pA;
            ll pn = (pB==b[i])?0:1;

            if(d<pn){
                ip = false;
                break;
            }
            if(d%2==pn){
                count+=d;
            } else{
                count+=(d-1);
            }

            pA=a[i];
            pB = b[i];
        }

        if(!ip){
            mone;
            continue;
        } 
        
        count+=(m-pA);

        countt;

    }
    
}
