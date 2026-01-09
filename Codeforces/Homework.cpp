/*
 N   N   AAAAA  H   H  III  DDDD  
 NN  N  A     A H   H   I   D   D 
 N N N  AAAAAAA HHHHH   I   D   D 
 N  NN  A     A H   H   I   D   D 
 N   N  A     A H   H  III  DDDD  
*/

#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"-1\n"
// #define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define foriton for(long long i=0; i<n; i++)
#define forntoi for(long long i=n-1; i>=0; i--)
#define en cout<<"\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;
ll n, freq[MAX], m, q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int m;
        cin>>m;
        string b;
        cin>>b;
        string c;
        cin>>c;
        int l = c.length();
        string s=a;
        // if(c[0]=='D'){
        //     int x = 0;
        //     int y = n-1;
        // } else{
        //     int x = n-1;
        //     int y = 0;
        // }
        for(int i=0; i<l; i++){
            if(c[i]=='D'){
                s+=b[i];
            }  else{
                s=b[i]+s;
            }
        }

        cout<<s<<endl;
    }
}
