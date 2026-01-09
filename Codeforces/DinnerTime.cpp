#include<iostream>
#include<vector>
#include<algorithm>
#define e endl
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,p,q;
        cin>>n>>m>>p>>q;
        if((n/p)*q!=m && n%p==0){
            cout<<"NO"<<e;

        } else{
            cout<<"YES"<<e;
        }
    }
}