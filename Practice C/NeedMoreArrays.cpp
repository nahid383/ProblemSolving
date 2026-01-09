#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int count = 0;
        // for(int i=0; i<n-1; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(a[j]-a[i]>=2){
        //             count++; 
        //             break;
        //         }

        //     }
        // }
        int num = -2;
        for(int i=0; i<n; i++){
            if(a[i]>num+1){
                count++;
                num = a[i];
            }
        }
        cout<<count<<endl;
    }
}