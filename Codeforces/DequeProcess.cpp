#include<bits/stdc++.h>
using namespace std;
     
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
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        foriton{
            cin>>a[i];
        }
        string s = "";
        int st = 0;
        int lt = n-1;
        foriton{
            if(i%2==0){
                if(a[st]<a[lt]){
                    s=s+'L';
                    st++;
                } else{
                    s=s+'R';
                    lt--;
                }
            } else{
                if(a[st]>a[lt]){
                    s=s+'L';
                    st++;
                } else{
                    s=s+'R';
                    lt--;
                }
            }
        }
        
        cout<<s<<en;
    }
   
}