#include<iostream> 
#include<vector>
using namespace std;

int binarySearch(vector<int> &a,int target, int st, int end){
    int mid = st+(end-st)/2;
    if(st>end){
        return -1;
    }
    if(a[mid]==target){
        return mid;
    }
    if(a[mid]>target){
        return binarySearch(a, target, 0, mid-1);
    }
    if(a[mid]<target){
        return binarySearch(a, target, mid+1, end);
    }

    
}
int main(){
    vector<int> a={1,2,3,4,5,6,7,8,9};
    int n = a.size();
    int target = 9;
    int idx = binarySearch(a, target , 0, n-1);
    cout<<idx<<endl;
}