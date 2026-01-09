#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(3);
      vec.push_back(2);
    vec.push_back(3);
      vec.push_back(2);
    vec.push_back(3);

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.pop_back();
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"front "<<vec.front()<<" "<<"back "<<vec.back()<<endl;
}