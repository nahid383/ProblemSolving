#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5};

    vec.erase(vec.begin()+2);
    cout<<"After Erase: "<<endl;
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;

   vec.insert(vec.begin()+2,9);
   cout<<"After Insert: "<<endl;
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;

    vec.clear();
     cout<<"After Clear: "<<endl;
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;

}