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
        int n,k;
        cin>>n>>k;
        vi a(n);

        foriton{
            cin>>a[i];
        }

        int minima = *min_element(a.begin(), a.end());

        if(minima>k){
            mone;
            continue;
        }

        int sum = 0;
        int count = 1;
        for(int i=0; i<n; i++){
            if(sum + a[i] <= k){
                sum+=a[i];
            } else{
                count++;
                sum = a[i];
            }
        }

        countt;
        
 
        
 
        
    }
    
}