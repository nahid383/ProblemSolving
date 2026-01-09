#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int x[n]; 
    for(int i=0; i<n; i++){
        cin>>x[i];
    }

    long long maxSum = INT8_MIN;

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
