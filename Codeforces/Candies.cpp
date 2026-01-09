#include<iostream>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for(int k=2; ; k++){
            ll d = 0, te =1;
            for(int i=0; i<k; i++){
                d+=te;
                te*=2;
            }
            if(d>n){
                break;
            }
            if(n%d==0){
                cout<<n/d<<endl;
                break;
            }
        }
    }
    
}