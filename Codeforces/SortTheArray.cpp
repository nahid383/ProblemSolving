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
        
        ll n;
        cin>>n;
        vl a(n);
        foriton{
            cin>>a[i];
        }
        vl b = a;
     
        sort(b.begin(), b.end());
     
        ll count = 0;
        ll s=-1, l=-1;
        foriton{
            if(b[i]!=a[i]){
                s=i;
                break;
            }
        }
     
        forntoi{
            if(b[i]!=a[i]){
                l=i;
                break;
            }
        }
        if(s==-1 || l==-1){
            yes;
            cout<<1<<" "<<1<<en;
            return 0;
        }
        for(ll i=s; i<l; i++){
            if(a[i]<a[i+1]){
                no;
                return 0;
            }
        }
        yes;
        cout<<s+1<<" "<<l+1;
        return 0;
     
        // countt;
        // if(count>1){
        //     no;
        // } else{
        //     yes;
        // }
     
    }