#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#include<unordered_map>
#include<map>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define en endl
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       int t;

       cin>>t;
       while(t--){
            int x,n;
            cin>>x>>n;
            int m = x-n;
            bool isPairity = false;
            if(n%2==0 && m%2==0){
                isPairity = true;
            } else if(n%2!=0 && m%2!=0){
                isPairity = true;
            }
            if(n==1){
                isPairity=true;
            }
            if(n%2!=0){
                isPairity=true;
            }
            if(isPairity){
                yes;
            } else{
                no;
            }
       }
}
