#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int flag = 0;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int y=0,z=n-1;
    // for(int j=0; j<n-1; j++){
    //     for(int k=j+1; k<n; k++){
    //         if(a[j]+a[k]==x){
    //             flag = 1;
    //             y=j;
    //             z=k;
    //             break;
    //         }
    //     }
    //     if(flag){
    //         break;
    //     }
    // }
    int q,r;
    while(y<z){
        long long sum = a[y]+a[z];
        if(sum==x){
            flag=1;
            q=y;
            r=z;
            break;
        }
        
        z--;
    }
    if(flag){
        cout<<q+1<<" "<<r+1<<endl;

    }
    else{
        cout<<"-1"<<endl;
    }
}