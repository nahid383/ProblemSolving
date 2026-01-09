#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {1,1,2,3,3,4,4,8,8};
    int st = 0, end = arr.size()-1;
    while(st<=end){
        int mid = st + (end-st)/2;

        if(arr[mid]!=arr[mid-1]&&arr[mid]!=arr[mid+1]){
            cout<<mid<<endl;
            return 0;
        }
        if(mid%2==0){
            if(arr[mid-1]==arr[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        else{
            if(arr[mid-1]==arr[mid]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    cout<<"-1"<<endl;
    return 0;
}