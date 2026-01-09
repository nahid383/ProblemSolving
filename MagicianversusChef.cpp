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
        int n,x,s;
        cin>>n>>x>>s;
        int a,y;
        int currPos = x;
        for(int i=0; i<s; i++){
            cin>>a>>y;
            if(a==currPos){
                currPos=y;
            } else if(currPos==y){
                currPos=a;
            }
        }
        cout<<currPos<<endl;
        // if(x!=s1[0] && x!=s2[0]){
        //     cout<<x<<endl;
        //     continue;
        // }
        // int a = s1[s-2], b=s2[s-2];
        // int c = s1[s-1], d = s2[s-1];

        // if(c==a || c==b){
        //     cout<<d<<endl;
        // } else{
        //     cout<<c<<endl;
        // }
    }
    
}