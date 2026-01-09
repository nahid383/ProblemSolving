#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isValid(vector<int> &arr, int n, int m, int maximumPainters){
    int painters = 1;
    int boards = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>maximumPainters){
            return false;
        }
        if(boards+arr[i]<=maximumPainters){
            boards+=arr[i];
        } else{
            painters++;
            boards = arr[i];
        }
    }
    if(painters==m){
        return true;
    } else{
        return false;
    }
}
int paintersPartition(vector<int> &arr, int n, int m){
    if(m>n){
        return -1;
    }
    int sum = 0;
    int maxVal = INT8_MIN;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        maxVal = max(maxVal, arr[i]);
    }
    int st = maxVal, end =sum;
    int ans = -1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(isValid(arr, n,m,mid)){
            ans = mid;
            end = mid-1;
        } else{
            st = mid+1;
        }
    } 

    return ans;
}

int main(){
    vector<int> arr = {40,30,10,20};
    int n = 4;
    int m =2;
    cout<<paintersPartition(arr, n, m)<<endl;
}