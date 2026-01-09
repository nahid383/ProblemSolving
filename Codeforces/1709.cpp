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
        ll n;
        cin>>n;
        vl a(n);
        vl b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        vector<pair<int,int>> result;

        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-1; j++){
                if(a[j]>a[j+1]){
                    swap(a[j], a[j+1]);
                    result.push_back({1,j});
                }
            }
        }

        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-1; j++){
                if(b[j]>b[j+1]){
                    swap(b[j], b[j+1]);
                    result.push_back({2,j});
                }
            }
        }
    
        for(int i=0; i<n; i++){
            if(a[i]>b[i]){
                swap(a[i], b[i]);
                result.push_back({3,i});
            }
        }

        cout<<result.size()<<en;

        for(int i=0; i<result.size(); i++){
            cout<<result[i].first<<" "<<result[i].second+1<<en;
        }
    }



}
