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
       vector<int> a(65);
       a[0] = 1;
       for(int i=1; i<=60; i++){
        if(i%2==0){
            a[i] = a[i-1] + 1;
        } else{
            a[i] = a[i-1] * 2;
        }
       }
       while(t--){
        int n;
        cin>>n;
        cout<<a[n]<<en;
       }
}