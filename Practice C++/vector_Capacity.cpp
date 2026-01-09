#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nahid;
    nahid.push_back(0);
    nahid.push_back(3);
    nahid.push_back(7);
    nahid.push_back(4);
    nahid.push_back(0);
    nahid.push_back(3);

    cout<<nahid.size()<<endl;
    cout<<nahid.capacity()<<endl;
    for(int value: nahid){
        cout<<value<<endl;
    }
}