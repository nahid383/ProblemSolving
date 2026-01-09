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
#define en "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>n;
    vector<ll> array(n);
    foriton{
        cin>>array[i];
    }
    vector<ll> temp = array;
    sort(temp.begin(), temp.end());
    ll k;
    cin>>k;

    for(int i=1; i<=k; i++){
        ll type,l,r;
        cin>>type>>l>>r;
        ll sum = 0;
        l--;
        r--;
        if(type==2){         
            for(ll i=l; i<=r; i++){
                sum=sum+temp[i];
            }
        } else if(type==1){
            for(ll i=l; i<=r; i++){
                sum=sum+array[i];
            }
        }
        cout<<sum<<en;
    }
}
