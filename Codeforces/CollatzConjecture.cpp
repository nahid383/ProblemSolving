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

    if(!(cin>>t))
    return 0;
    while(t--){
        ll k,x;
        cin>>k>>x;
        for(int i=0; i<k; i++){
            if(x%2==0){
                x*=2;
            } else{
                if((x-1)%3==0){
                    ll y = (x-1)/3;
                    if(y>0 && y%2==1){
                    x=y;
                } else{
                    x*=2;
                }
                } else{
                    x*=2;
                }
                
            }
        }

        cout<<x;en;
    }
    return 0;
    
}
