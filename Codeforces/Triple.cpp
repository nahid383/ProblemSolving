#include<iostream>
#include<algorithm>
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
        int m = sizeof(a)/sizeof(a[0]);
        sort(a, a+m);
        int falag= 0;
        int corected;
        for(int i=0; i<n-2; i++){
            if(a[i]==a[i+1] && a[i]==a[i+2]){
                corected=a[i];
                falag=1;
            }
        }
        if(falag){
            cout<<corected<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}