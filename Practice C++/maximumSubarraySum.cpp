#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter no. of elements: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter all elements: "<<endl;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Here is all the subarray of the main array :"<<endl;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<a[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<"No of subarray: ";
    cout<<(n*(n+1))/2;
    int maximumSum=INT8_MIN;
    for(int i=0; i<n; i++){
        int currentSum=0;
        for(int j=i; j<n; j++){
            currentSum=currentSum+a[j];
            if(currentSum<0){
                currentSum=0;
            }
            maximumSum=max(maximumSum,currentSum);
        }
        // if(currentSum>maximumSum){
        //     maximumSum=currentSum;
        // }

    }

    cout<<endl<<"Maximum Sum of Subarray: ";
    cout<<maximumSum;

}