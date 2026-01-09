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

    ll t;
    cin>>t;
    while(t--){
        int k,x;
        cin>>k>>x;
        int tCake = 1;

        for(int i=1; i<=k; i++){
            tCake = tCake*2;
        }

        int chocola = tCake;
        int vanilla = tCake;

        vi operations;
        int a = x, b = tCake-x;
        while(chocola!=x){
            if(chocola>x&&chocola%2==0){
                chocola/=2;
                vanilla+=chocola;
                operations.push_back(1);
            } else if(vanilla>tCake-x && vanilla%2==0){
                vanilla/=2;
                chocola+=vanilla;
                operations.push_back(2);
            }
        }

        cout<<operations.size()<<endl;

        for(int i=0; i<operations.size(); i++){
            cout<<operations[i]<<" ";
        }
        
        en;
    }
    
}
