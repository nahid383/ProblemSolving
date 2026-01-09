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
       int count = 1;
   int d = 0;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin>>b[i];
    }

    for(int i=0; i<n; i++){
        if(a[i]>b[i]){
            d=d+a[i]-b[i];
        } else{
            continue;
        }
    }

    count+=d;

    countt;
   }
}
