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
    
    ll p,c;
    cin>>p>>c;
    queue<int> q;
    int caser = 1;
    for(int i=0; i<p; i++){
        q.push(i+1);
    }
    cout<<"Case"<<caser<<":\n";
    caser++;
    for(int i=0; i<c; i++){
        string s;
        cin>>s;
        if(s=="N"){
            int front = q.front();
            q.pop();
            cout<<front<<en;
            q.push(front);
        } else{
            int x;
            cin>>x;
            cout<<getNth
        }
    }
}
