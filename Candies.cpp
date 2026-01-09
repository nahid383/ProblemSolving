#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#include<unordered_map>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define en endl
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       int t;
       cin>>t;
       while(t--){
        int n;
        cin>>n;
        unordered_map<int, int> freq;
        vector<int> a(2*n);
        for(int i=0; i<2*n; i++){
            cin>>a[i];
            freq[a[i]]++;
        }
        bool valid = true;
        for(auto &val: freq){
            if(val.second>2){
                valid=false;
                break;
            }
        }
        if(valid){
            yes;
        } else{
            no;
        }
       }
}