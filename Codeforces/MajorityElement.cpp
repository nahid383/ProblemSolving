#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={2,2,1,1,1};
    int majority;
    for(int value : nums){
        int freq = 0;
        for(int element : nums){
            if(element == value){
                freq++;
            }
        }
        if(freq>nums.size()/2){
            majority=value;
        }
    }

    cout<<"Majority Element is: "<<majority;
}