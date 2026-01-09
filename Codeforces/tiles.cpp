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
#define mone cout<<"-1\n"
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define en "\n"
#define MOD 998244353
#define ll long long
using namespace std;
const int MAX = 1e5+5;
int solve(int w, int h){
  int result = 1;
  for(int i=1; i<=w+h; i++){
    result = (result*2)%998244353;
  }
  ans;
}
int main(){
    int w,h;
    cin>>w>>h;
    solve(w,h);
}
