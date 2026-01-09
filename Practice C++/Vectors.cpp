#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};

    for(int value: vec){
        cout<<value<<endl;
    }
    cout<<"size of Vector 1: "<<vec.size()<<endl;
    vector<char>vec2 = {'a','b','c','d','e'};

    for(char value: vec2){
        cout<<value<<endl;
    }
    cout<<"size of Vector 2: "<<vec2.size()<<endl;
    return 0;
}