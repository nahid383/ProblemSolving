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
        int count = 1;
        int size = sizeof(a)/sizeof(a[0]);
        sort(a, a+size);
        for(int i=1; i<n; i++){
            // for(int j=i+1; j<n; j++){
            //     if(a[i]==a[j]){
            //         count = count - 1;

            //     }
            // }
            if(a[i]!=a[i-1]){
                count++;
            }
        }
        int duplicate = n-count;

        if(duplicate%2==1){
            cout<<count-1<<endl;
        }else{
                cout<<count<<endl;
            }
        // cout<<count<<endl;
    }
}
