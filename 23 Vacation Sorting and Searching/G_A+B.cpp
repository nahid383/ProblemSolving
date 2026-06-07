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
    int y,z;
    for(int j=0; j<n-1; j++){
        for(int k=j+1; k<n; k++){
            if(a[j]+a[k]==x){
                flag = 1;
                y=j;
                z=k;
                break;
            }
        }
        if(flag){
            break;
        }
    }

    if(flag){
        cout<<y+1<<" "<<z+1<<endl;

    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }
}