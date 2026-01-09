#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

bool isPossible(vector<int> &arr, int n, int c, int maximumDistance){
    int cow = 1; 
    int lastPos = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]-lastPos>=maximumDistance){
            cow++;
            lastPos = arr[i];
        // } else{
           
        // }
        if(cow == c){
            return true;
        }
           
    }
}
    return false;
}

int minimumPossibleDistance(vector<int> &arr, int n, int c){
    sort(arr.begin(), arr.end());
    int lows = arr[0];
    int high = arr[n-1]-arr[0];
    int ans = -1;
    while(lows<=high){
    int mid = lows + (high - lows)/2;
        if(isPossible(arr, n, c, mid)){
            ans = mid;
            lows = mid+1;
           
        } else{
             high = mid - 1;

        }
    }

    return ans;

}
int main(){
    vector<int> arr={1,2,8,4,9};

    int n=5;
    int c=3;
    cout<<minimumPossibleDistance(arr, n, c);

    return 0;
}