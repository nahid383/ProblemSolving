#include<iostream>
#include<algorithm>
#include<deque>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    deque<int> dq;
    bool isReversed = false;
    while(q--){
        string s;
        cin>>s;
        if(s=="back"){
            if(!dq.empty()){
                if(!isReversed){
                    cout<<dq.back()<<'\n';
                    dq.pop_back();
                } else{
                    cout<<dq.front()<<'\n';
                    dq.pop_front();
                }

            } else{
                cout<<"No job for Ada?"<<'\n';
            }
        } else if(s=="front"){
            if(!dq.empty()){
                if(!isReversed){
                    cout<<dq.front()<<'\n';
                    dq.pop_front();
                } else{
                    cout<<dq.back()<<'\n';
                    dq.pop_back();
                }

            } else{
                cout<<"No job for Ada?"<<'\n';
            }
        } else if(s=="reverse"){
            // reverse(dq.begin(), dq.end());  high time complexity O(n) for full code O(n*q);
            isReversed = !isReversed;
        } else if(s=="push_back"){
            int n;
            cin>>n;
            if(!isReversed){
                dq.push_back(n);
            } else{
                dq.push_front(n);              
            }

        } else if(s=="toFront"){
            int n;
            cin>>n;

            if(!isReversed){
                dq.push_front(n);
            } else{
                dq.push_back(n);
            }

        }
    }

    return 0;
}