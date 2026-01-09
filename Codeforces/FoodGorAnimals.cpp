#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        int remd = max(0,x-a);
        int remc = max(0,y-b);
        if(a>=x && b>=y){
            cout<<"YES"<<endl;

        }
        else if(remc+remd<=c){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }
}