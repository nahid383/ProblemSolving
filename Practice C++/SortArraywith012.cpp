#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> a = {2,0,2,1,1,0};
    int mid = 0, high = 5, low = 0;

    while(mid<=high){
        if(a[mid]==0){
            swap(a[low],a[mid]);
            mid++;
            low++;

        } else if(a[mid]==1){
            mid++;
        } else{
            swap(a[high],a[mid]);
            high--;
        }
    }
    for(int i=0; i<6; i++){
        cout<<a[i]<<" ";
    }
}