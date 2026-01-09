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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    if(n%4==0){
        cout<<"Bob"<<e;

    } else{
        cout<<"Alice"<<e;
    }
   }
}