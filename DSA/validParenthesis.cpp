#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<char> st;
    for(char c:s){
        if(c=='('){
            st.push(c);
        } else if(c==')'){
            if(st.empty()){
                return false;
            } else{
                st.pop();
            }
        }
    }

    return st.empty();
}


int main(){
    string s;
    cin>>s;
    if(isValid(s)){
        cout<<1<<endl;
    } else{
        cout<<0<<endl;
    }
}