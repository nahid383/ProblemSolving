#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
    list<int> l;

    l.push_back(1); //add the value in the last position
    l.push_back(2);
    l.push_back(2);
    l.push_front(3);    // add the value in the first position
    l.push_front(4);
    l.push_back(2);
    l.push_back(5);
    l.push_front(6);
    l.push_back(2);

    cout<<"after add all element: "<<endl;
    for(int val: l){
        cout<<val<<" ";
    }
    cout<<endl;

    l.pop_back();   // remove the last element
    cout<<"after pop back an element: "<<endl;
    for(int val: l){
        cout<<val<<" ";
    }
    cout<<endl;

    l.pop_front();  //remove the first position
    cout<<"after pop front an element: "<<endl;
    for(int val: l){
        cout<<val<<" ";
    }
    cout<<endl;

    auto it = l.begin();
    advance(it,3);
    l.insert(it, 5);    // insert an element in the position
    cout<<"after inserting 5 in the position 3:"<<endl;
    for(int val: l){
        cout<<val<<" ";
    }
    cout<<endl;

    l.remove(2);    // remove all elements equal to 2
    cout<<"after removing all elements equal to 2:"<<endl;
    for(int val: l){
        cout<<val<<" ";
    }
    cout<<endl;

    l.unique();     //remove consequtive duplicates
    cout<<"after removing consequtive duplicates:"<<endl;
    for(int val: l){
        cout<<val<<" ";
    }
    cout<<endl;

}