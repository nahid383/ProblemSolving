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
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"0"<<endl
#define ans  cout<<result<<endl
#define en endl
#define MOD 998244353
#define ll long long
using namespace std;
void solve(string s1, string s2){
    int l = s1.length();
    int mincount = 0;
    int ques1 = 0;
    int ques2 = 0;
    for(int i=0; i<l; i++){
        if(s1[i]!='?' && s2[i]!='?' && s1[i]!=s2[i]){
            mincount++;
        }
        if(s1[i]=='?' || s2[i]=='?'){
            ques1++;
        }
        
    }
    int max;
    // if(ques1>ques2){
    //     max = ques1;
    // } else{
    //     max = ques2;
    // }

    cout<<mincount<<" "<<mincount+ques1<<en;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        solve(s1,s2);
    }
       
}
