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
#include <cstdint>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mone cout<<"0\n"
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define en "\n"
#define MOD 998244353
#define ll long long
using namespace std;
const int MAX = 1e5+5;

int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    bool fstthree = false;
    bool one = false;
    bool last = false;
    int pos1, posN;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1){
            pos1=i+1;
            one = true;
        } if(a[i]==n){
            posN=i+1;
            last = true;
            if(!one){
                fstthree=true;
            }
        }
    }
    bool isDone = false;
    if(a[0]==1 && a[n-1]==n){
        mone;
        continue;
    }
    // cout<<pos1<<" "<<posN<<en;
    int step = (pos1-1)+(n-posN);
    if(fstthree){
        cout<<step-1<<en;
    } else{
        cout<<step<<en;
    }
    
    
   }
}
