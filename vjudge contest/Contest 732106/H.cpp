#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#include<unordered_map>
#include<map>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mone cout<<"-1\n"
#define ans  cout<<result<<"\n"
#define en "\n"
#define MOD 998244353
#define ll long long
using namespace std;
const int MAX = 1e5+5;
void isPossible(int a, int b, int c, int d, string s){
    if(a==-1||b==-1||c==-1||d==-1){
        mone;
        return;
    } 
    int count  = 0;
    for(int i=c+1; i<d; i++){
        if(s[i]=='|'){
            count++;
        }
    }
    cout<<4+count<<en;
    return;
}
int solve(string s){
    int l = s.length();
    int openingB = -1, endingB = -1, openingC = -1, endingC = -1;
    for(int i = 0; i<l; i++){
        if(s[i]=='['){
            openingB = i;
            break;
        }
    }
    for(int i = l-1; i>openingB; i--){
        if(s[i]==']'){
            endingB = i;
            break;
        }
    }
    for(int i = openingB+1; i<endingB; i++){ 
        if(s[i]==':'){
            openingC = i;
            break;
        }
    }
    for(int i = endingB-1; i>openingC; i--){
        if(s[i]==':'){
            endingC = i;
            break;
        }
    }
    isPossible(openingB, endingB, openingC, endingC,s);
    return 0;

    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    solve(s);
}
