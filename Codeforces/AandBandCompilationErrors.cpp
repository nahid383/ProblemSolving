#include<bits/stdc++.h>
using namespace std;
long long n;
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"-1\n"
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define foriton for(long long i=0; i<n; i++)
#define forntoi for(long long i=n-1; i>=0; i--)
#define foriton1 for(long long i=0; i<n-1; i++)
#define en "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin>>n;
    vector<ll> a(n);
    foriton{
        cin>>a[i];
    }
    vector<ll> b(n-1);
    foriton1{
        cin>>b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int first=a[n-1];

    for(ll j=0; j<n-1; j++){
        // if(j==n-2){
        //     first=a[j+1];
        //     break;
        // }
            if(a[j]!=b[j]){
                first=a[j];
                break;
            }
        }
    vector<ll> c(n-2);
    for(int i=0; i<n-2; i++){
        cin>>c[i];
    }

    sort(c.begin(), c.end());
    int second=b[n-2];
        for(int j=0; j<n-2; j++){
            // if(j==n-3){
            //     second=b[j+1];
            //     break;
            // }
            if(b[j]!=c[j]){
                second=b[j];
                break;
            }
        }
    cout<<first<<" \n"<<second<<en;
}
