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
#define no cout<<"NO "
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define en endl
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       int n;
       cin>>n;

       map<string, int> freq;
        string s;
       for(int i=0; i<n; i++){
        cin>>s;
        freq[s]++;
       }

       string w;
       int max = 0;

       for(auto &val : freq){
        if(val.second>max){
            max=val.second;
            w = val.first;
        }
       }

       cout<<w<<en;
}
