#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int recbinarySearc(vector<int> arr, int target, int start, int end){
    if(start<=end){
        int mid = start+(end-start)/2;

        if(target>arr[mid]){
            return recbinarySearc(arr, target, mid+1, end);
        }
        else if(target<arr[mid]){
            return recbinarySearc(arr, target, start, mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int target1 = 4;
    cout<<recbinarySearc(arr1, target1,0,6)<<endl;
}