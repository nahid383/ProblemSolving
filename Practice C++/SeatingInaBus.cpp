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
        int flag=0;
        for(int i=1; i<n-2; i++){
            if(abs(a[i]-a[i+1])>1 || abs(a[i+1]-a[i])>1){
                flag=1;
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}