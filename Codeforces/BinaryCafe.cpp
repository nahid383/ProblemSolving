#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#define ll long long
#define e endl
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        ll k;
        cin>>n>>k;

        if(k>=31){
            cout<<n+1<<e;
        } else{
            ll sum = ((ll)1<<k)-1;
            if(n>=sum){
                cout<<sum+1<<e;
            } else{
                cout<<n+1<<e;
            }
        }

    }
}