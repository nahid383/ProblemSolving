#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> &a, int target){
    for(int i=0; i<a.size(); i++){
        if(a[i]==target){
            return i;
        }
    }

    return -1;
}
int main(){
    vector<int> a = {2,3,4,5,6,9,8};
    int tar=2;
    cout<<linearSearch(a,tar);
}