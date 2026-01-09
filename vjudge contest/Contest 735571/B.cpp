#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    bool isReversed = false;
    deque<int> dq;
    while(q--){
        string s;
        cin>>s;
        if(s=="reverse"){
            isReversed=!isReversed;
        }
        else if(s=="back"){
            if(!isReversed){
                if(!dq.empty()){
                    cout<<dq.back()<<endl;
                    dq.pop_back();
                } else{
                    cout<<"No job for Ada?"<<endl;
                }
            } else{
                if(!dq.empty()){
                    cout<<dq.front()<<endl;
                    dq.pop_front();
                } else{
                    cout<<"No job for Ada?"<<endl;
                }
      
            }
        } else if(s=="front"){
            if(isReversed){
                if(!dq.empty()){
                    cout<<dq.back()<<endl;
                    dq.pop_back();
                } else{
                    cout<<"No job for Ada?"<<endl;
                }
            } else{
                if(!dq.empty()){
                    cout<<dq.front()<<endl;
                    dq.pop_front();
                } else{
                    cout<<"No job for Ada?"<<endl;
                }
      
            }
        } else if(s=="push_back"){
            int val;
            cin>>val;
            if(!isReversed)
            dq.push_back(val);
            else
            dq.push_front(val);
        } else if(s=="toFront"){
            int val;
            cin>>val;
            if(!isReversed){
                dq.push_front(val);
            } else{
                dq.push_back(val);
            }
        }
    }
}