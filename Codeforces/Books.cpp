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
void solve(int n, int t, vector<int> &a) {
    // sort(a.begin(), a.end());
   int count  =0 ;
   int sum = 0;
   int left = 0;
   for(int i=0; i<n; i++){
    sum+=a[i];
    count++;
    if(sum>t){
        sum-=a[left];
        left++;
        count--;
    }

   }
   countt;
   return;
}
int main(){
    int n,t;
    cin>>n>>t;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    solve(n,t,a);
}
