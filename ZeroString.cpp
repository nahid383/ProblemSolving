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
const int MAX = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l = s.length();
        int ones = 0;
        int zeros = 0;
        for(int i=0; i<l; i++){
            if(s[i]=='1'){
                ones++;
            } else{
                zeros++;
            }
        }
        // if(ones==0){
        //     cout<<0<<en;
        // } else if(zeros==0){
        //     cout<<1<<en;
        // // } else if(zeros>ones){
        // //     cout<<ones<<endl;
        // } else{
        //     cout<<ones<<en;
        // }
        cout<<min(ones, 1+zeros)<<en;
    }
       
}
