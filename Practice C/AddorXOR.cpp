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
#define en endl
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int t;
   cin>>t;
   while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a/2>b/2){
            cout<<-1<<en;
        } else if(a>b){
            cout<<y<<en;
        } else{
            cout<<(b/2-a/2)*x+(b-a-b/2+a/2)*min(x,y)<<en;
        }

   }
}