#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int flag = 0;
        if(a[0]%2==0){
          for(int i=0; i<n; i+=2){
            if(a[i]%2!=0){
                flag=1;
            }
          }
        }
        else if(a[0]%2!=0){
          for(int i=0; i<n; i+=2){
            if(a[i]%2==0){
                flag=1;
            }
          }
        }
        if(a[1]%2!=0){
          for(int i=1; i<n; i+=2){
            if(a[i]%2==0){
                flag=1;
            }
          }
        }
        else if(a[1]%2==0){
          for(int i=3; i<n; i+=2){
            if(a[i]%2!=0){
                flag=1;
            }
          }
        }
        if(flag==1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}