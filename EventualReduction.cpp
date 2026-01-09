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
        int max = 0;
        vector<int> freq(MAX, 0);
        for(int i=0; i<n; i++){
            freq[s[i]]++;
        }
        bool isRemoval = true;

        
        for(int i=0; i<n; i++){
            if(freq[s[i]]%2!=0){
                isRemoval=false;
            }
        }
        if(isRemoval){
            yes;
        } else{
            no;
        }
    }
       
}
