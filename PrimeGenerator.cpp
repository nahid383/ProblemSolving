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

bool isPrime(int n){
    if(n==1){
        return false;
    }
    if(n==2){
        return true;
    } 
    if(n%2==0){
        return false;
    }
    bool isDivide = false;
    for(int i=3; i*i<=n; i=i+2){
        if(n%i==0){
            isDivide=true;
            break;
        }
    }
    if(isDivide){
        return false;
    } else{
        return true;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        // if(a==1){
        //     a++;
        // }
        for(int i=a; i<=b; i++){
            if(isPrime(i)){
                cout<<i<<en;
            }
        }
        cout<<en;

    }

}
