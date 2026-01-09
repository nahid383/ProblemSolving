#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define e endl
#define ll long long
using namespace std;
ll gcd(ll a, ll b){
    while(b){
        a%=b;
        swap(a,b);
    }

    return a;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
         
        // if(a==1 && b%2!=0){
        //     cout<<b*b<<e;
        //     continue;
        // }
        // if(a%2!=0 && b%2!=0){
        //     cout<<a*b<<e;
        //     continue;
        // }
        // int x = b;
        // for(int i=b+b; ; i=i+b){
        //     if(i%b==0){
        //         if(i%a==0){
        //             cout<<i<<e;
        //             break;
        //         }
        //     }
        // }

        ll x;
        if(b%a==0){
            x = (b*b)/a;
        } else{
            ll g = gcd(a,b);
            x = b*(a/g);
        }

        cout<<x<<e;
    }
}