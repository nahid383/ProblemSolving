#include<iostream>
using namespace std;
void reverseArray(int arr[], int size){
 int start = 0, end = size-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {1,4,7,9,6,3,2,5,8};
    int size = sizeof(arr)/sizeof(arr[0]);
   
    reverseArray(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" "; 
    }

}