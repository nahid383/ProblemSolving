#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"0\n" 
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int train = n%8;
        if(train==1){
            cout<<n+3<<"LB"<<en;
        } else if(train==2){
            cout<<n+3<<"MB"<<en;
        } else if(train==3){
            cout<<n+3<<"UB"<<en;
        } else if(train==4){
            cout<<n-3<<"LB"<<en;
        } else if(train==5){
            cout<<n-3<<"MB"<<en;
        } else if(train==6){
            cout<<n-3<<"UB"<<en;
        } else if(train==7){
            cout<<n+1<<"SU"<<en;
        } else if(train==0){
            cout<<n-1<<"SL"<<en;
        }
    }

}
