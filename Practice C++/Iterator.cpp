#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};

    vector<int>::iterator it;

    for(it=vec.begin(); it!=vec.end(); it++){
        cout<<*it<<" ";
    } 
    cout<<endl;

    vector<int>:: reverse_iterator it2;


    for(it2=vec.rbegin(); it2!=vec.rend(); it2++){
        cout<<*it2<<" ";
    }

    cout<<endl;
    for(auto it=vec.rbegin(); it!=vec.rend(); it++){
        cout<<*(it)<<endl;
    }
}