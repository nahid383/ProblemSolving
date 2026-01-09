#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    int m=1;
    while(t--){
        
     int a,b,n;
     cin>>a>>b>>n;
      int count = 0;
      for(int i=a; i<=b; i++){
        if(i%n!=0){
            count++;
        }
      }
    cout<<"Case #"<<m<<": ";
   cout<<count<<endl;
   m++;
}
}