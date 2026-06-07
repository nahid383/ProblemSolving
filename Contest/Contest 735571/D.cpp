#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int minidiff = INT16_MAX;
    sort(a.begin(), a.end());
    int sum1=0;
    int sum2=0;
    for(int i=0; i<n ; i++){
        sum1=sum1+a[i];
        int sum =0;
        for(int j=i+1; j<n; j++){
            sum=sum+a[j];
        }
        if(abs(sum-sum1)<minidiff){
            minidiff=abs(sum-sum1);
        }
    }
    cout<<minidiff<<endl;
}