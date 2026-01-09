#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    vec.pop_back();
    vec.pop_back();
    vec.push_back(17);
    cout<<"Size of the vector: "<<vec.size()<<endl;
    for(int value:vec){
        cout<<value<<endl;
    }
}