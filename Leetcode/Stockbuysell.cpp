#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n; i++){
        cin>>a[i];
    }
    int minM = INT8_MAX;
    int index;
    for(int i=0; i<n-1; i++){
       if(minM>a[i]){
        minM=a[i];
        index = i;
       }
    }
    
    int maxM = INT8_MIN;
    for(int i=index+1; i<n; i++){
        maxM = max(a[i],maxM);
    }
    cout<<maxM-minM<<endl;

}