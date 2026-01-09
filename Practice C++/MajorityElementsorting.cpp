#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> numbers = {3,1,2,3,2,3,1,3,3,};
    int size = numbers.size();
    // sort the vector
    sort(numbers.begin(), numbers.end());
    //freq count
    int freq = 1;

    int ans = numbers[0];

    for(int i=0; i<size; i++){
        if(numbers[i]==numbers[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans = numbers[i];
        }
        if(freq>size/2){
            cout<<ans;
        }
      
    }

}