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
    
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int max, min;
    if(x1>x2 && x1>x3){
        max=x1;
    } else if(x2>x1 && x2>x3){
        max=x2;
    } else{
        max=x3;
    }
    if(x1<x2 && x1<x3){
        min=x1;
    } else if(x2<x1 && x2<x3){
        min=x2;
    } else{
        min=x3;
    }
    cout<<max-min<<endl;
}
