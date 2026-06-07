#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &a,int key, int st, int end){
    
    if(st>end){
        return -1;
    }
    int mid = st+(end-st)/2;


    if(a[mid]==key){
        return mid;
    }
    if(a[mid]>key){
        return binarySearch(a,key, st, mid-1);
    } else{
        return binarySearch(a, key, mid+1, end);
    }

    
}
int main(){
    vector<int> a = {8,10,12,21,27,34,42,};
    int target = 28;

    cout<<binarySearch(a,target, 0, a.size()-1)<<endl;
}