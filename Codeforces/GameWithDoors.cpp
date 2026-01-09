#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define e endl
#define ll long long
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        ll L,R;
        cin>>L>>R;
        ll result;
        if(L>r || l>R){
            result=1;
        } else{
        ll X = max(l,L);
        ll Y = min(r,R);

        result = Y-X;

        if(X>l || X>L){

            result++;
        }
        if(Y<r || Y<R){
            result++;
        }
    }
        ans;
    }
}