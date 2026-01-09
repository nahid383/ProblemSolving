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

int factorial(int n){
    int fact = 1;
    if(n==1)
    return fact;

    fact = n*factorial(n-1);
    // return fact;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
     int n;
     cin>>n;
     int fact = factorial(n);

     cout<<fact<<endl;
}
