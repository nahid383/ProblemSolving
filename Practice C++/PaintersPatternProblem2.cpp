#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define end endl

bool isValid(vector<int> &arr, int n, int m, int maximumPainter){
    int painter = 1;
    int board = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>maximumPainter){
            return false;
        }
        if(board+arr[i]<=maximumPainter){
            board+=arr[i];
     
        } else{
            painter++;
            board = arr[i];
        }
    }
    if(painter==m){
        return true;
    } else{
        return false;
    }
}

int paintersPartition(vector<int> &arr, int n, int m){
    int sum=0;
    int maxVal = INT16_MIN;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        maxVal = max(maxVal, arr[i]);
    }
    int st = maxVal, end = sum;
    int ans = -1;
    while(st<=end){
        int mid = st + (end - st)/2;
        if(isValid(arr, n, m, mid)){
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
    int n=4, m=2;
    cout<<paintersPartition(arr, n, m)<<end;

}