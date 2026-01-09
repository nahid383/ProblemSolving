#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define ll long long
#define e endl
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=n-1; 
        int b=n;
        cout<<"1 ";
        for(int i=2; i<=n; i++){
            if(i%2==0){
                cout<<b<<" ";
                b=b-2;
            } else{
                cout<<a<<" ";
                a=a-2;
            }
        }
        cout<<e;
    }
}