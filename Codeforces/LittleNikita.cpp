#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(m<=n && (n-m)%2==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}