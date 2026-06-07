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

    string s;
    cin>>s;
    stack<char> st;
    int count = 0;
    int n = s.length();
    for(char c:s){
        if(!st.empty() && st.top()==c){
            count++;
            st.pop();
        } else{
            st.push(c);
        }
    }
    if(count%2==0){
        no;
    } else{
        yes;
    }
}