#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        stack<int> st;
        queue<int> qu;
        vector<int> a;
        if(n==0){
            if(st.empty() && qu.empty() && a.empty()){
                cout<<0<<endl;
            } else if(!st.empty()){
                cout<<1<<" "<<"popStack"<<endl;
            } else if(!qu.empty()){
                cout<<1<<" "<<"popQueue"<<endl;
            } else if(!a.empty()){
                cout<<1<<" "<<"popFront"<<endl;
            }
            
            else if(st.empty() && qu.empty() && !a.empty()){
                cout<<1<<" "<<"popFront"<<endl;
            } else if(st.empty() && !qu.empty() && a.empty()){
                cout<<1<<" "<<"popQueue"<<endl;
            } else if(!st.empty() && qu.empty() && a.empty()){
                cout<<1<<" "<<"popStack"<<endl;
            } else if(st.empty() && !qu.empty() && !a.empty()){
                cout<<2<<" "<<"popQueue"<<" "<<"popFront"<<endl;
            } else if(!st.empty() && qu.empty() && !a.empty()){
                cout<<2<<" "<<"popStack"<<" "<<"popFront"<<endl;
            } else if(!st.empty() && !qu.empty() && a.empty()){
                cout<<2<<" "<<"popStack"<<" "<<"popQueue"<<endl;
            } else if(!st.empty() && !qu.empty() && a.empty()){
                cout<<3<<" "<<"popStack"<<" "<<"popQueue"<<" "<<"popFront"<<endl;
            }
        } else if(n==1){
            st.push(n);
            cout<<"pushStack ";
        } else if(n==2){
            qu.push(n);
            cout<<"pushQueue ";
        } else if(n==3){
            a.push_back(n);
            cout<<"pushFront ";
        }

        cout<<endl;
    }
}