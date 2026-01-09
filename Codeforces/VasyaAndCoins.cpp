#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==0){
            cout<<"1"<<endl;
        }
        else{
            cout<<n+(m*2)+1<<endl;
        }
    }
}