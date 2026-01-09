#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<"FRONT: "<<q.front()<<endl;               //10;
    cout<<"BACK: "<<q.back()<<endl;                 //40;

    q.pop();                                        //removes 10

    cout<<"Front after POP: "<<q.front()<<endl;     //20;

    q.pop();                                        //removes 20;

    cout<<"Front after 2nnd POP: "<<q.front()<<endl;

}