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
        // if(n==1){
        //     cout<<"1"<<endl;
        //     continue;
        // }
        int l = sizeof(a) / sizeof(a[0]);
        sort(a,a+l);
        int count = 1;
        for(int i=1; i<n; i++){
            if(a[i-1]==a[i]){
                continue;
            }
            count++;
        }
        cout<<count<<endl;
    }
}