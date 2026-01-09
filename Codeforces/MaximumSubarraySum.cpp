#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    vector<int> a(t);
    for(int i=0; i<t; i++){
        cin>>a[i];

    }
    long long maxSum = a[0];
    long long sum = 0;
    for(int i=0; i<t; i++){
        sum+=a[i];
        if(sum>maxSum){
            maxSum=sum;

        }
        if(sum<0){
            sum = 0;
        }
    }
    cout<<maxSum;
}