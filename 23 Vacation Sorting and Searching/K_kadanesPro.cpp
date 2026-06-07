#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> x(n);
    for(int i=0; i<n; i++){
        cin>>x[i];
    }

    long long maxSum = 0;

    // for(int i=0; i<n; i++){
    //         long long sum = 0;
    //     int j=i;
    //     int size = j+(a-b);
    //     while(j>size){
    //         sum+=x[j];
    //         j++;
        
    //     }
    //     if(sum>maxSum){
    //         maxSum=sum;

    //     }
        // if(sum<0){
        //     sum = 0;
        // }
       
    // }
     for(int i=0;i<n;i++){
        for(int len=a; len<=b; len++){
            if(i+len<=n){
                long long sum=0;
                for(int j=i;j<i+len;j++){
                    sum+=x[j];
                }
                if(sum>maxSum){
                     maxSum=sum;
                }
            }
        }
    }
    cout<<maxSum;
}