#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define e endl
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin>>n;
    stack<int> st;
    stack<int> minst;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(s=="PUSH"){
            int m; 
            cin>>m;
            st.push(m);

            if(minst.empty() || m<=minst.top()){
                minst.push(m);
            }
        }
        else if(s=="MIN"){
            if(st.empty()){
                cout<<"EMPTY"<<'\n';
            } else{
                cout<<minst.top()<<'\n';
            }
        } else if(s=="POP"){
            if(st.empty()){
                cout<<"EMPTY"<<'\n';
            } else{
                if(st.top()==minst.top()){
                    minst.pop();
                }
                st.pop();
            }
        }
    }
}