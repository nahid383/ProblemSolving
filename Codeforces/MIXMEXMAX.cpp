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
        ll n;
        cin>>n;
        vl a(n);
        foriton{
            cin>>a[i];
        }
        bool valid = true;
        int lst = 0;
        foriton{
            if(a[i]==-1){
                continue;
            }
            if(lst==0){
                lst=a[i];
            }

            if(a[i]==0 || a[i]!=lst){
                no;
                valid=false;
                break;
            }
        }
        if(valid) yes;
    }

}
