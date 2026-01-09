#include<iostream>
using namespace std;

int isprime(int x){
    for(int i=2; i<x; i++){
        if(x%i==0){
            return i;
        }
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int flag = isprime(x);
        if(x%2==0){
            cout<<x/2<<endl;
        }
        else if(flag==0){
            cout<<x-1<<endl;
        }
        else{
            int nahid = x/flag;
            int nahid2 = nahid-1;
            cout<<nahid2*flag<<endl;
        }
    }
}